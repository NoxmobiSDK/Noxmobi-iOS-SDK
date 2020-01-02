#! /bin/bash

# ===============修改podspec的版本号===========================

PodName="NoxmobiSDK"

echo "\n🔥当前版本号："
# 打印一下当前情况
#sed -n '/Mark/ p' $PodName.podspec
currentLine=`cat $PodName.podspec | grep "Mark"`
srcVer=${currentLine#*\"}
srcVer=${srcVer%%\"*}
echo "$srcVer"

# 提示输入版本号
echo "\n🔥请输入即将发布的版本号："

# 接收终端输入的参数
read inputVer

# 打印参数
if [[ "$inputVer" == "" ]]
then
    inputVer="$srcVer"
    echo "使用: $srcVer"
else
    echo "\n🔥输入的是：$inputVer"
fi


# 使用sed进行替换 把1-5行的 数字.数字.数字 替换为1.4.3。保存到临时文件。
#sed "1,5 s/[0-9].[0-9].[0-9]/$inputVer/" ShellTest.podspec > Temp.podspec
# 可以不指定行号 而是去匹配标记行，在行尾的注释中做标记
sed "/Mark/ s/[0-9].[0-9].[0-9]/$inputVer/" $PodName.podspec > Temp.podspec

# 删除源文件
rm $PodName.podspec

# 修改临时文件名为源文件名
mv Temp.podspec $PodName.podspec

echo "\n🔥修改完毕"
sed -n '/Mark/ p' $PodName.podspec

# ===============验证语法============================

# 语法检查的原命令
srcCommand="pod spec lint $PodName.podspec"
# push的原命令
pushCommand="pod trunk push $PodName.podspec"
# 附加命令参数：--skip-import-validation
subCommand="--skip-import-validation"
echo "\n🔥是否附加--skip-import-validation参数[y/n]"
read flag
if [[ "$flag" == "y" ]]
then
    srcCommand="$srcCommand $subCommand"
    pushCommand="$pushCommand $subCommand"
fi

echo "\n🔥开始验证podspec文件语法"
# 声明命令执行结果
checkRes=`$srcCommand`
checkKey="$PodName.podspec passed validation."

echo "$checkRes"

if [[ $checkRes =~ $checkKey ]]
then
    # 包含
    echo "\n\n🔥验证通过，开始上传pod..."
    
# ===============正式上传============================

    pushRes=`$pushCommand`
    # 打印上传结果
    echo "\n🔥$pushRes\n\n"
    # 根据上传结果判断是否继续
    echo "🔥是否继续[y/n]"
    read stillContinue
    if [[ "$stillContinue" == "y" ]]
    then

# ===============重置索引============================

        echo "\n🔥开始setup\n"
        pod setup
        echo "\n🔥开始删除原索引\n"
        rm ~/Library/Caches/CocoaPods/search_index.json
        echo "\n🔥开始search\n\n"
        searchRes=`pod search $PodName`
        echo "$searchRes"
    fi

else
    # 不包含
    echo "\n\n🔥验证未通过"
fi

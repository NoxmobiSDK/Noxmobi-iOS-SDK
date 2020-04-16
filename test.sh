#! /bin/bash

# ===============修改podspec的版本号===========================

PodName="NoxmobiSDK"

echo "\n🔥当前版本号："
# 打印一下当前情况
#sed -n '/Mark/ p' $PodName.podspec
CurrentLine=`cat $PodName.podspec | grep "Mark"`
srcVer=${CurrentLine#*\"}
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

#str="http://www.fengbohello.xin3e.com/blog/shell-truncating-string"
#length=${#str}
#echo "字符串长度 : ${length}"

# 一个#是最小限度从头部开始裁掉 word; 裁掉 http:/
# 输出：/www.fengbohello.xin3e.com/blog/shell-truncating-string
# 两个#是最大限度; 裁掉 http://www.fengbohello.xin3e.com/blog/
# 输出：shell-truncating-string
#substr=${str##*/}
#echo "substr : $substr"

# 一个%是最小限度从尾部开始裁掉 word; 裁掉 /shell-truncating-string
# 输出：http://www.fengbohello.xin3e.com/blog
# 两个%是最大限度; 裁掉 /www.fengbohello.xin3e.com/blog/shell-truncating-string
# 输出：http:
#substr=${str%%/*}
#echo "substr : $substr"

# 掐头去尾, 只留fengbohello
#substr=${str#*.}
#substr=${substr%%.*}
#echo "substr : $substr"


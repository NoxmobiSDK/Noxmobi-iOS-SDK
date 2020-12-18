#! /bin/bash

FrameworkName="Noxmobi"
PodName="NoxmobiSDK"

# 读取plist中的版本号
BundleVersion=$(/usr/libexec/PlistBuddy -c "Print CFBundleShortVersionString" ./$FrameworkName.framework/Info.plist)
echo $BundleVersion

# 替换podspec文件中的版本号
sed "/spec\.version/ s/[0-9]\.[0-9]*\.[0-9]/$BundleVersion/" $PodName.podspec > Temp.podspec
# 删除源文件
rm $PodName.podspec
# 修改临时文件名为源文件名
mv Temp.podspec $PodName.podspec
# 打印修改完的podspec中的版本号
echo "spec.version = "`cat $PodName.podspec | grep "\"[0-9]\.[0-9]*\.[0-9]\"" -o`


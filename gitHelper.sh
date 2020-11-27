#! /bin/bash

# 过一阵子研究一下怎么自动读取xml文件，自动拿版本号
commitString="v1.12.2"

echo "\n🔥查看改动 git status："
gitStatusRes=`git status`
echo "$gitStatusRes"

echo "\n🔥添加到暂存区 git add . ："
gitAddRes=`git add .`

echo "\n🔥提交 git commit："
gitCommitRes=`git commit -m $commitString`
echo "$gitCommitRes"

echo "\n🔥推送到远程 git push："
gitPushRes=`git push origin master`
echo "$gitPushRes"

echo "\n🔥打本地标签 git tag："
gitTagRes=`git tag $srcVer`

echo "\n🔥推送标签 git tag："
gitPushTagRes=`git push origin $srcVer`
echo "$gitPushTagRes"

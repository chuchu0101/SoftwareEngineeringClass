# SoftwareEngineeringClass
软件工程项目
##项目简介
本项目是基于C语言实现的命令行文本技术统计程序。程序能够正确统计导入的纯英文TXT文本中字符数，单词数，句子数。实现该功能的源码为**\code\WordCountV01.cpp**，此为还可以统计文本中的代码行、空行、注释行。整个功能整合的源码为**\code\WordCountV02.cpp**
##程序使用方法
下面命令行中wc.exe为编译后的可执行文件，file.txt为纯英文文本。

```
wc.exe -c file.exe
```

统计文本的字符数。注意：该字符包括文本每一行的末尾字符"\0"

```
wc.exe -l file.exe
```

统计文本的总行数。

```
wc.exe -a file.exe
```

统计文本的总行数。

```
wc.exe -w file.exe
```

##单元测试
单元测试

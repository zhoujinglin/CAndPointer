# Chapter 2 基本概念

## 2.1 环境

翻译环境(translation environment)

执行环境(execution environment)

交叉编译器(cross compiler)

独立环境(freestanding environment)：不存在操作系统的环境

### 2.1.1 翻译

目标代码(object code)

链接器(linker)

预处理器(preprocessor)

解析(parse)

优化器(optimizer)

![编译过程](image/2019-04-03-00-06-49.png)

1. 编译并链接一个完全包含于一个源文件的C程序：

    ``` shell
    cc program.c
    ```

2. 编译并链接几个C源文件

    ``` shell
    cc main.c sort.c lookup.c
    ```

3. 编译一个C与源文件，并把它和现存的目标文件链接在一起：

    ``` shell
    cc main.o lookup.o sort.c
    ```

4. 编译单个C源文件, 并产生一个目标文件(本例中为 program.o)，以后再进行链接：

    ``` shell
    cc -c program.c
    ```

5. 编译几个C源文件，并为每个文件产生一个目标文件：

    ``` shell
    cc -c main.c sort.c lookup.c
    ```

6. 链接几个目标文件：

    ``` shell
    cc main.o sort.o lookup.o
    ```

### 2.1.2 执行

## 2.2 词法规则

标记(token)

### 2.2.1 字符

三字母词(trigrph)

转移序列(escape sequence)

字符转义(character escape)

### 2.2.2 注释

所有的注释都会被与处理器拿掉，取而代之的是一个空格

### 2.2.3 自由形式的源代码

### 2.2.4 标识符(identifer)

标识符的长度没有限制，但标准允许编译器忽略第31个字符以后的字符

### 2.2.5 程序的形式

## 2.3 程序风格
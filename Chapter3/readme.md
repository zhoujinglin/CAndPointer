# Chapter 3 数据

## 3.1 基本数据类型

C语言中，仅有4种基本数据类型——整型、浮点型、指针和聚合类型（如数组和结构等）

### 3.1.1 整型家族

长整型至少应该和整型一样长，而整型至少应该和短整型一样长。

<center>表 3.1 变量的最小范围</center>

<center>

| 类型 | 最小范围 |
| :- | :- |
| char | 0 ~ 127 |
| signed char | -127 ~ 127 |
| usigned char | 0 ~ 255 |
| short int | -32767 ~ 32767 |
| unsigned short int | 0 ~ 65535 |
| int | -32767 ~ 32767 |
| unsigned int | 0 ~ 65535 |
| long int | -2147483647 ~ 2147483647 |
| unsigned long int | 0 ~ 4294967295 |

</center>

头文件 `limits.h` 说明各种不同的整数类型的特点。它定义了表3.2 所示的各个名字。同时定义了下列名字：`CHAR_BIT` 是字符型的位数（至少8位）；`CHAR_MIN` 和 `CHAR_MAX` 定义了缺省字符类型的范围，它们或者与`SCHAR_MIN` 和 `SCHAR_MAX` 相同，或者应该与 0 和 `UCHAR_MAX` 相同；`MB_LEN_MAX` 规定了一个多字节字符最多允许的字符数量。

<center>表 3.2 变量范围的限制</center>

<center>

| | signed | | unsigned |
| - | - | - | - |
| 类型 | 最小值 | 最大值 | 最大值 |
| 字符 | SCHAR_MIN | SCHAR_MAX | UCHAR_MAX |
| 短整型 | SHRT_MIN | SHRT_MAX | USHRT_MAX |
| 整型 | INT_MIN | INT_MAX | UINT_MAX |
| 长整型 | LONG_MIN | LONG_MAX | ULONG_MAX |

</center>

#### 一、整型字面值

字面值(literal) 是字面值常量的缩写。`ANSI C` 允许命名变量(named constant, 声明为 const 的变量)的创建。

八进制字面值，十进制整型字面值，十六进制字面值可能是 `int` `long` `unsigned long` 。在缺省的情况下，它是最短类型但能完整容纳这个值。

``` c
123     65535   -275
0172    01777   000060
0x7b    0xFFFF  0xabcdef00
```

字符常量的类型总是 `int` 。不能在后面添加 `usigned` `long` 后缀。

``` c
'M'     '\n'    '??('   '\377'
```

如果一个多字节字符常量的前面有一个 `L` ，那么它就是宽字符常量(wide character literal)

``` c
L'X'    L'e^'
```

#### 二、枚举类型

枚举(enumerated)类型就是指它的值为符号常量而不是字面值的类型，声明如下：

``` c
enum Jar_Type { CUP, PINT, QUART, HALF_GALLON, GALLON };
```

这条语句声明了一个类型，称为 `Jar_Type` 。这种类型的变量按下列方式声明：

``` c
enum Jar_Type milk_jug, gas_can, medicine_bottle;
```

如果只使用一个声明，可以组合成下列方式：

``` c
enum { CUP, PINT, QUART, HALF_GALLON, GALLON } milk_jug, gas_can, medicine_bottle;
```

枚举类型的符号名实际值都是整型值。这里 `CUP` 是 0，`PINT` 是 1。也可以指定特定的值：

``` c
enum Jar_Type { CUP = 8, PINT = 16, QUART = 32, HALF_GALLON = 64, GALLON = 128 };
```

如果某个符号名未显示指定一个值，那么它的值就比前面一个符号的值大 1 。

### 3.1.2 浮点类型

ANSI 标准仅仅规定 `long double` 至少和 `double` 一样长，`double` 至少和 `float` 一样长，所有浮点类型至少能够容纳从 `10^(-37)` 到 `10^37` 之间的任何值。

头文件 `float.h` 定义了 `FLT_MAX` `DBL_MAX` `LDBL_MAX` `FLT_MIN` `DBL_MIN` `LDBL_MIN` ，表示 `float` `double` `long double` 能够储存的最大值和最小值。

``` c
3.14159     1E10    25.     .5      6.023e25
```

浮点数字面值缺省情况下是 `double` 类型， 后面跟 `L` 或 `l` 表示 `long double` 类型值， `F` 或 `f` 表示 `float` 类型值。

### 3.1.3 指针

#### 一、指针常量(pointer constant)

#### 二、字符串常量(string literal)

字符串：一串以 `NUL` 字节结尾的零个或多个字符。

``` c
"Hello"     "\aWarning!\a"      "Line 1\nLine 2"    ""
```

空字符串依然是以 `NUL` 字节作为终止符。

在程序中使用字符串常量会生成一个指向字符的常量指针。当一个字符串常量出现于一个表达式中时，表达式所使用的值就是这些字符所储存的地址，而不是字符串本身。

## 3.2 基本声明

``` c
说明符（一个或者多个）  声明表达式列表;
```

说明符(specifer)包含一些关键字，用于描述被声明的标识符的基本类型。

<center>

表 3.3 相等的整型声明

|  |  |
| - | - |
| short & signed short & short int & signed short int | unsigned short & unsigned short int |
| int & signed int & signed | unsigned int & unsigned |
| long & signed long & long int & signed long int | unsigned long & unsigned long int |

</center>

### 3.2.1 初始化

### 3.2.2 声明简单数组

> 如果下标值是从那些已知是正确的值计算而来，那么无需检查它的值。如果一个用作下标的值是根据某种方法从用户输入的数据产生而来的，那么使用它之前必须进行检测，确保它们位于有效的范围之内。

### 3.2.3 声明指针

> 警告 `int* a;` 这个声明看上去更为清楚， `a` 被声明为 `int*` 的指针。但是，这并不是一个好技巧，原因如下：
>
> `int* b, c, d;` 会让人自然的以为这条语句把所有的变量声明为指向整型的指针，并非如此。星号实际是表达式 `*b` 的一部分，只对这个标识符有用。正确的语句应该是： `int *b, *c, *d;`

``` c
char *message = "Hello world!";
```

这条语句把 `message` 声明为一个指向字符的指针，并用字符串常量中第1个字符的地址对该指针进行初始化。

### 3.2.4 隐式声明

在使用旧风格声明函数的形式参数时，如果省略了参数的类型，编译器就会默认他们是整型。编译器如果可以得到充足的信息，推断出一条语句实际上是一个声明时，如果它缺少类型名，编译器就会假定它为整型。

``` c
int a[10];
int c;
b[10];
d;

f(x) {
    return x + 1;
}
```

对于 `K&R` 编译器而言，上面缺少的声明符都会被默认为整型。

## 3.3 typedef

> 提示：应该使用 `typedef` 而不是 `#define` 来创建新的类型名，因为后者无法正确的处理指针类型。例如：
> ``` c
> #define d_ptr_to_char char *
> d_ptr_to_char a, b;
> ```
> 正确的声明了 `a` ，但是 `b` 却被声明为一个字符。

## 3.4 常量

``` c
int const a;
const int a;
```

可以在声明时对它进行初始化，在函数中声明为 `const` 的形参在函数调用时会得到实参的值。

``` c
int *pi;
// pi 是一个普通的指向整型的指针

int const *pci;
// pci 是一个指向整型常量的指针。你可以修改指针的值，但你不能修改它所指向的值。

int * const cpi;
// cpi 是一个指向整型的常量指针。此时指针是常量，它的值无法修改，但你可以修改它所指向的整型的值。

int const * const cpci;
// cpci 是一个指向整型常量的常量指针
```

`#define` 是另一种创建名字常量的机制。

``` c
#define MAX_ELEMENTS 50
int const max_evements = 50;
```

`#define` 只要允许使用字面值常量的地方都可以使用，`const` 变量只能用于允许使用变量的地方。

## 3.5 作用域

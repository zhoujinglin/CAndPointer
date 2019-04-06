# Chapter4 语句

## 4.1 空语句

C最简单的语句就是空语句，它本身只有一个分号。

## 4.2 表达式语句

``` c
x = y + 3;
ch = getchar();
```

上面两个实际上是表达式语句，而不是赋值语句。

## 4.3 代码块

代码块就是位于一对花括号之内的可选的声明和语句列表。

``` c
{
    declarations
    statements
}
```

## 4.4 if 语句

``` c
if ( expression )
    statement
else
    statement
```

## 4.5 while 语句

``` c
while ( expression )
    statement
```

### 4.5.1 break 和 continue 语句

`break` 语句用于永久终止循环。`continue` 语句用于永久终止当前的那次循环。这两条语句只对最内层的循环起作用，你无法使用 `break` 或 `continue` 语句影响外层循环的执行。

### 4.5.2 while 语句的执行过程

![while 语句的执行过程](image/2019-04-06-16-04-46.png)

### 4.6 for 语句

``` c
for ( expression1; expression2; expression3 )
    statement
```

![for 语句的执行过程](image/2019-04-06-16-07-24.png)

## 4.7 do 语句

``` c
do
    statement
while ( expression )
```

![do 语句的执行过程](image/2019-04-06-16-09-32.png)

## 4.8 switch 语句

``` c
switch ( expression ) {
    case 1:
    case 2:
    case 3:
        statement-list
        break;
    case 4:
    case 5:
        statement-list
        break;
    default：
        statement-list
        break;
}
```

## 4.9 goto 语句

``` c
goto 语句标签;
```

`goto` 语句非常适合跳出多层循环。

``` c
while (condition1) {
    while (condition2) {
        while (condition3) {
            if ( some disaster)
                goto quit;
        }
    }
}
quit: ;
```

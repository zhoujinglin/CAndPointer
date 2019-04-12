/*
** image/2019-04-12-16-38-11.png
** image/2019-04-12-16-38-29.png
*/
#include <stdio.h>
const char ESC = 27;

char encryption(char in) {
    if (in >= 'a' && in <= 'z')
    {
        return (in - 'a' + 13) % 26 + 'a';
    }
    if (in >= 'A' && in <= 'Z')
    {
        return (in - 'A' + 13) % 26 + 'A';
    }
    return in;
}

int main()
{
    printf("请输入字符串：");
    char ch;
    while ((ch = getchar()) && (ch != ESC))
    {
        putchar(encryption(ch));
    }
    putchar('\n');

    return 0;
}
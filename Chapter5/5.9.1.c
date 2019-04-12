/*
** image/2019-04-12-16-10-43.png
*/
#include <stdio.h>

const char ESC = '\e';
const int distance = 'Z' - 'z';


char upper(char in)
{
    if (in <= 'Z' && in >= 'A')
        return in - distance;
    return in;
}

int main() {
    printf("请输入字符串：");
    char ch;
    while ((ch = getchar()) && (ch != ESC))
    {
        putchar(upper(ch));
    }
    putchar('\n');

    return 0;
}
/*
** image/2019-04-13-15-19-44.png
*/
#include <stdio.h>

const int true = 1;
const int false = 0;

static char *match(char *str, char const *want)
{
    while (*want != '\0')
        if (*str++ != *want++)
            return NULL;
    return str;
}

static int del_substr(char *str, char const *substr)
{
    char *next;
    while (*str != '\0')
    {
        next = match(str, substr);
        if (next != NULL)
            break;
        str++;
    }
    if (*str == '\0')
        return false;
    while (*str++ = *next++)
        ;
    return true;
}

int main()
{
    char str[] = "ABCDEFG";
    char *ch1 = "FGH";
    char *ch2 = "CDF";
    char *ch3 = "XABC";
    char *ch4 = "CDE";

    del_substr(str, ch1);
    printf("%s\n", str);
    del_substr(str, ch2);
    printf("%s\n", str);
    del_substr(str, ch3);
    printf("%s\n", str);
    del_substr(str, ch4);
    printf("%s\n", str);
}
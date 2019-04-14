/*
** image/2019-04-14-16-06-05.png
*/
#include <stdio.h>
static const int true = 1;
static const int false = 0;

static int isNumber(char *in)
{
    if (*in <= '9' && *in >= '0') return true;
    return false;
}

int ascii_to_integer(char *string)
{
    int number = 0;
    while (isNumber(string))
    {
        number = number * 10 + *string - '0';
        string++;
    }
    if (*string == '\0') return number;
    return 0;
}

int main(void)
{
    char *string1 = "19961228";
    char *string2 = "2813s";
    printf("%d\n%d\n", ascii_to_integer(string1), ascii_to_integer(string2));
    return 0;
}
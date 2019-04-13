/*
** image/2019-04-13-14-49-20.png
*/
#include <stdio.h>

char *find_char(char const *source, char const *chars)
{
    char *result = NULL;
    while (*(result = source++) != '\0')
    {
        char *it = chars;
        while (*it++ != '\0')
        {
            if ((*result == *it))
                return result;
        }
    }
    return NULL;
}

void print(char const *in) {
    if (in == NULL) printf("error!\n");
    else printf("%c\n", *in);
}

int main() {
    char *source = "ABCDEF";
    char *ch1 = "XYZ";
    char *ch2 = "JURY";
    char *ch3 = "QQQQ";
    char *ch4 = "XRCQEF";

    print(find_char(source, ch1));
    print(find_char(source, ch2));
    print(find_char(source, ch3));
    print(find_char(source, ch4));
}
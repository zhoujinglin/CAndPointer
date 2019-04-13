/*
** image/2019-04-13-16-47-22.png
*/
#include <stdio.h>

static void reverse_string(char *string) {
    char *end = string;
    char *begin;
    while (*++end);
    for (begin = string, end--; end > begin; end--, begin++)
    {
        char temp = *begin;
        *begin = *end;
        *end = temp;
    }
}

int main() {
    char string[] = "ABCDEF";
    reverse_string(string);
    printf("%s\n", string);
    return 0;
}
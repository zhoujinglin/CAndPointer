/*
** image/2019-04-03-01-03-33.png
*/
#include <stdio.h>

int main() {
    char c;
    int flag = 0;
    do {
        scanf("%c", &c);
        if (flag < 0) break;
        if (c == '{') flag++;
        if (c == '}') flag--;
    } while (c == '\e');

    if (flag == 0) printf("true\n");
    else printf("false\n");
    return 0;
}
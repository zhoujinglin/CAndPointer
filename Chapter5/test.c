#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    ch = '\27';
    printf("%d\n", ch);
}
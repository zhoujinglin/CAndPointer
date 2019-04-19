#include <stdio.h>

int main(void)
{
    extern int *a;
    extern int b[];
    
    printf("%p\n", a);
    printf("%p\n", &a[3]);
    // printf("%p\n", b);
    // printf("%p\n", &b[1]);
}
/*
** image/2019-04-14-16-00-51.png
*/
#include <stdio.h>

int gcd(int m, int n) {
    if (m <= 0 || n <= 0) return 0;
    if (m % n == 0) return n;
    return gcd(n, m % n);
}

int main(void) {
    printf("%d\n", gcd(10, 25));

    return 0;
}
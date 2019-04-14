/*
** image/2019-04-14-15-55-17.png
** image/2019-04-14-15-55-31.png
*/
#include <stdio.h>

int hermite(int n, int x) {
    if (n <= 0) return 1;
    if (n == 1) return 2 * x;
    return 2 * x * hermite(n - 1, x) - 2 * (n - 1) * hermite(n - 2, x);
}

int main(void) {
    printf("%d\n", hermite(3, 2));
}
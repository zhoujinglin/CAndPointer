/*
** image/2019-04-06-16-52-47.png
*/

#include <stdio.h>

const int true = 1;
const int false = 0;

int isPrime(const int in);

int main() {
    for (int i = 2; i <= 100; i++) {
        if (isPrime(i)) printf("%4d", i);
    }
    putchar('\n');
    return 0;
}

int isPrime(const int in) {
    for (int i = 2; i < in; i++) {
        if (in % i == 0) return false;
    }
    return true;
}
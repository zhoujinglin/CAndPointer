/*
** image/2019-04-06-16-32-40.png
** image/2019-04-06-16-32-58.png
*/

#include <stdio.h>

/* 计算平方根 */
double sqrt(const double);

int main() {
    printf("请输入一个正数：");
    double x;
    scanf("%lf", &x);
    printf("sqrt(%lf) = %lf\n", x, sqrt(x));
}

double sqrt(const double in) {
    double result = 1;
    double temp;
    do {
        temp = result;
        result = (temp + in / temp) / 2;
    } while (result != temp);
    return result;
}
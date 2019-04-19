/*
** image/2019-04-19-14-13-35.png
** image/2019-04-19-14-13-56.png
*/
#include <stdio.h>
#include <stdarg.h>

int array_offset(int const arrayinfo[], ...);

int main(void) {
    int arrayinfo[] = {3, 4, 6, 1, 5, -3, 3};
    int x = 4, y = 2, z = -3;
    scanf("%d %d %d", &x, &y, &z);
    int location = array_offset(arrayinfo, x, y, z);
    printf("%d\n", location);
    return 0;
}

int array_offset(int const arrayinfo[], ...) {
    va_list var;
    va_start(var, arrayinfo);

    int dims = *arrayinfo++;
    if (dims < 1 || dims > 10) return -1;
    int location = 0;
    int index = 0;
    for (int i = 0; i < dims; i++) {
        int low = *arrayinfo++;
        int high = *arrayinfo++;
        index = va_arg(var, int);
        if (index < low || index > high) return -1;

        location = location * (high - low + 1) + index - low;
    }
    va_end(var);
    return location;
}
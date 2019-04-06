/*
** image/2019-04-06-17-19-46.png
*/

#include <stdio.h>

void copy_n(char dst[], char src[], int n);

int main() {


    return 0;
}

void copy_n(char dst[], char src[], int n) {
    for (int dst_index = 0, src_index = 0; dst_index < n; dst_index++) {
        dst[dst_index] = src[src_index];
        if (src[src_index] != 0)
            src_index++;
    }
}
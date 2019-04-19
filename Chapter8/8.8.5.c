/*
** image/2019-04-16-15-21-46.png
*/
#include <stdio.h>

static void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z);

int main(void)
{
    int m1[3][2] = {{2, -6}, {3, 5}, {1, -1}};
    int m2[2][4] = {{4, -2, -4, -5}, {-7, -3, 6, 7}};
    int r[3][4] = {0};
    matrix_multiply(m1, m2, r, 3, 2, 4);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d", r[i][j]);
        }
        putchar('\n');
    }

    return 0;
}

static void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < z; j++)
        {
            int index = 0;
            for (int m = 0; m < y; m++)
            {
                index += *(m1 + i * y + m) * *(m2 + m * z + j);
            }
            *r++ = index;
        }
    }
}
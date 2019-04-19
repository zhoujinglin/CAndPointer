/*
** image/2019-04-19-21-44-11.png
** 八皇后问题
*/
// #include <stdio.h>

// const int true = 1;
// const int false = 0;
// int chessboard[8][8];

// static int attack(int *location) {
//     int x = location[0], y = location[1];
//     for (int i = 0; i < 8; i++) {
//         if (chessboard[i][y] == 1 && i != x) return true;
//     }
//     for (int i = x, j = y; i >= 0 && j >= 0; i--, j--) {
//         if (chessboard[i][j] == 1) return true;
//     }
//     for (int i = x, j = y; i >= 0 && j < 8; i--, j++) {
//         if (chessboard[i][j] == 1) return true;
//     }
//     return false;
// }

// static void print() {
//     for (int i = 0; i < 8; i++) {
//         for (int j = 0; j < 8; j++)
//             printf("%4d", chessboard[i][j]);
//         putchar('\n');
//     }

//     static int method = 0;
//     printf("method %d\n", ++method);
// }

// void queen(int line) {
//     for (int i = 0; i < 8; i++) {
//         chessboard[line][i] = 0;
//         int location[] = {line, i};
//         if (line == 0 || !attack(location)) {
//             if (line < 7)
//                 queen(line + 1);
//             else
//                 print();
//         }
//         chessboard[line][i] = 1;
//     }
// }

// int main(void) {
//     queen(0);
//     return 0;
// }

#include <stdio.h>

int board[8][8];

//打印解决方案
void print_board()
{
    static int n_solutions;
    printf("Solution #%d:\n", ++n_solutions);
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%3d", board[i][j]);
        }
        putchar('\n');
    }
}

//检测board[row][column]的上半部分的方向上是否有其他皇后
int conflicts(int row, int column)
{
    int i;
    for (i = 1; i < 8; i++)
    {
        if (row - i >= 0 && board[row - i][column])
            return 1;
        if (column - i >= 0 && board[row][column - i])
            return 1;
        if (column + i < 8 && board[row][column + i])
            return 1;

        if (row - i >= 0 && column - i >= 0 && board[row - i][column - i])
            return 1;
        if (row - i >= 0 && column + i < 8 && board[row - i][column + i])
            return 1;
    }
    return 0;
}

//回溯法调用自身
void place_queen(int row)
{
    int column;
    for (column = 0; column < 8; column++)
    {
        board[row][column] = 1;
        if (row == 0 || !conflicts(row, column))
            if (row < 7)
                place_queen(row + 1);
            else
                print_board();
        board[row][column] = 0;
    }
}

int main()
{
    place_queen(0);
    return 0;
}
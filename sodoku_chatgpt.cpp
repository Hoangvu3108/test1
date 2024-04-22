#include <stdio.h>
#define N 9

// H�m d? ki?m tra xem s? c� th? du?c d?t v�o � hay kh�ng
int isSafe(int grid[N][N], int row, int col, int num) {
    // Ki?m tra h�ng v� c?t
    for (int x = 0; x < N; x++)
        if (grid[row][x] == num || grid[x][col] == num)
            return 0;

    // Ki?m tra � 3x3
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i + startRow][j + startCol] == num)
                return 0;

    return 1;
}

// H�m gi?i Sudoku b?ng phuong ph�p backtracking
int solveSudoku(int grid[N][N]) {
    int row, col;

    // T�m � tr?ng
    int found = 0;
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    // N?u kh�ng c� � tr?ng n�o th� Sudoku d� du?c gi?i quy?t
    if (!found)
        return 1;

    // Th? c�c s? t? 1 d?n 9
    for (int num = 1; num <= 9; num++) {
        // N?u s? c� th? du?c d?t v�o �
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num; // �?t s? v�o �

            // G?i d? quy d? ti?p t?c gi?i Sudoku
            if (solveSudoku(grid))
                return 1;

            // N?u kh�ng th? gi?i Sudoku v?i s? n�y, d?t � tr? l?i 0 v� th? s? kh�c
            grid[row][col] = 0;
        }
    }
    // N?u kh�ng c� s? n�o th�ch h?p, tr? v? 0 d? quay l?i bu?c tru?c
    return 0;
}

// H�m d? in Sudoku
void printGrid(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++)
            printf("%2d", grid[row][col]);
        printf("\n");
    }
}

// H�m main
int main() {
    int grid[N][N] = {{4, 0, 0, 6, 0, 0, 0, 1, 0},
                      {0, 0, 0, 0, 0, 0, 6, 0, 0},
                      {0, 0, 0, 0, 0, 9, 8, 0, 2},
                      {0, 7, 0, 4, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 6, 0, 0, 0, 0 },
                      {1, 0, 5, 9, 0, 0, 0, 4, 0},
                      {5, 0, 0, 0, 0, 0, 0, 8, 0},
                      {2, 0, 8, 1, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 7, 3, 0}};

    if (solveSudoku(grid) == 1)
        printGrid(grid);
    else
        printf("Khong co phuong an!");

    return 0;
}

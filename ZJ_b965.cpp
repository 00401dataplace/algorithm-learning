#include <iostream>
using namespace std;

void rotate(int A[][10], int *row, int *col) {
    int B[*col][*row];
    int tmp;
    for (int i = 0; i<*col; i++) {
        for (int j=0; i<*row; j++) {
            B[i][*row-1-j] = A[j][i];
        }
    }
    for (int i=0; i<*col; i++) {
        for (int j=0; j<*row; j++) {
            A[i][j] = B[i][j];
        }
    }
    tmp = *row;
    *row = *col;
    *col = tmp;
}

void flip(int A[][10], int row, int col) {
    int B[row][col];
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            B[i][j] = A[row-i-1][j];
        }
    }
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            A[i][j] = B[i][j];
        }
    }
}

void print_matrix(int A[][10], int row, int col) {
    int i, j;
    for (i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row, col, m;
    int com[m], A[10][10];
    for(int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for(int i=0; i<m; i++) {
        scanf("%d", &com[i]);
    }
    for(int i=0; i<m; i++) {
        if (com[i] == 1) flip(A, row, col);
        else rotate(A, &row, &col);
    }
    printf("%d %d\n", row, col);
    print_matrix(A, row, col);
    return 0;
}
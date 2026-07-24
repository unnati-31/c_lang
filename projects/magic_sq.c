#include <stdio.h>

// a magic square refers to a sq matrix where adding every row, every column and both the diagonals equal the same number.

#define MAX 10

void inputMatrix(int arr[MAX][MAX], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

int getRowSum(int arr[MAX][MAX], int row, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[row][i];
    }
    return sum;
}

int getColSum(int arr[MAX][MAX], int col, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i][col];
    }
    return sum;
}

int checkRowsandCols(int arr[MAX][MAX], int size, int target) {
    int ok = 1; 

    for (int i = 0; i < size; i++) {
        int rSum = getRowSum(arr, i, size);
        if (rSum != target) {
            printf("Row %d failed: sum = %d (expected %d)\n", i, rSum, target);
            ok = 0;
        }

        int cSum = getColSum(arr, i, size);
        if (cSum != target) {
            printf("Column %d failed: sum = %d (expected %d)\n", i, cSum, target);
            ok = 0;
        }
    }

    return ok;
}

int checkDiagonals(int arr[MAX][MAX], int size, int target) {
    int sum_p = 0;
    int sum_s = 0;
    
    for(int i = 0; i < size; i++){
        sum_p += arr[i][i];
    } 

    for(int i = 0; i < size; i++) {
        sum_s += arr[i][size-1-i];
    }

    int ok = 1;
    if (sum_p != target) {
        printf("Principal diagonal failed: sum = %d (expected %d)\n", sum_p, target);
        ok = 0;
    }
    if (sum_s != target) {
        printf("Secondary diagonal failed: sum = %d (expected %d)\n", sum_s, target);
        ok = 0;
    }

    return ok;
}

int main() {
    int arr[MAX][MAX];
    int size;

    printf("Enter size of square matrix: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX) {
        printf("Invalid size! Must be between 1 and %d.\n", MAX);
        return 1;   // exit early, don't proceed
    }

    inputMatrix(arr, size);

    int target = getRowSum(arr, 0, size);

    int RowsColsOK = checkRowsandCols(arr, size, target);
    int DiagOK = checkDiagonals(arr, size, target);

    if(RowsColsOK && DiagOK) {
        printf("THIS IS A MAGIC SQUARE!!!\n");
    } else {
        printf("NOT A MAGIC SQUARE");
    }
}
#include <stdio.h>

//prints the sum of the boundary elements of the square matrix(first and last rows, first and last columns)
 
int sumBoundary(int matrix[][100], int size) {
    int sum = 0;
    
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++){
            if(i == 0 || i == (size - 1) || j == 0 || j == (size - 1)) {
                sum+= matrix[i][j];
            }
        }
    }

    return sum;
}

int main() {
    int size; 
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    int matrix[100][100];

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int result = sumBoundary(matrix, size);
    printf("The sum is: %d", result);
}
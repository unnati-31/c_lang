#include <stdio.h>

//implements a function to calculate the sum of all elements in an integer array using pointer arithmetic

int calculateSum(int *arr, int size) {
    int sum = 0;
    int *ptr = arr;
    for(int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;
    }
    return 0;
}

int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int result = calculateSum(arr, size);
    printf("Sum: %d", result);
}
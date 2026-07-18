#include <stdio.h>

void swapElememts(int arr[], int size, int index1, int index2) {

    if(index1 < 0 || index1 >= size || index2 < 0 || index2 >= size){
        printf("Enter a valid index (must be between o and %d)\n", size - 1);
        return;
    }
    
    int swap = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = swap;

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++) { 
        scanf("%d", &arr[i]);
    }

    int index1, index2;
    printf("Enter the first no: ");
    scanf("%d", &index1);
    printf("Enter the second no: ");
    scanf("%d", &index2);

    swapElememts(arr, size, index1, index2);

    return 0;
}
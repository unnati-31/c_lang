#include <stdio.h>

int secondLargest(int arr[], int size) {
    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 0; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    for(int i = 0; i < size; i++) {
        if(arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == largest) {
        return largest;
    }

    return secondLargest;
}

int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int secondlargest = secondLargest(arr, size);
    printf("%d", secondlargest);
}
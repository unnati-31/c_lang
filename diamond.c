#include <stdio.h>
int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    //Pyramid
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n- i; j++) {
            printf(" ");    //to print space 
        }
        for(int j = 0; j <= 2 * i - 1; j++) {
            printf("*");    //to print stars 
        }
        printf("\n");
    }

    //Inverted pyramid
    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
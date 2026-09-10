#include <stdio.h> 

int main() {
    int num, original_num, digit;
    int remainder = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original_num = num;

    while(num > 0) {
        digit = num % 10;
        remainder += digit * digit * digit;
        num = num/10;
        if(remainder == original_num) {
            printf("This is an armstrong number.\n");
        } else {
            printf("The number is not an armstrong number.\n");
        }
    }
    
    return 0;
}
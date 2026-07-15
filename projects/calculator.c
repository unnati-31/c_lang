#include <stdio.h>

//Functions declare
int add(int a, int b) {
    return a+b;
}
int subtract(int a, int b) {
    return a-b;
}
int multiply(int a, int b) {
    return a*b;
}
int divide(int a, int b);
int calculate(int a, int b, char op);

int main() {
    int a,b;
    char op;

    //check for correct inputs
    if(scanf("%d %d %c", &a, &b, &op) !=3) {
        printf("Enter first no.: ");
        printf("Enter second no. :");
        printf("Enter the operation you want to perform: ");
        scanf(" %c", &op);

        if(op == 'q') {
            return 0;
        }
        printf("Invalid input");
        return 1;
    }

    int result = calculate(a, b, op);
    if (result != -99999) {
        printf("%d\n", result);
    }
    else {
        printf("Invalid input\n");
    }

    return 0;
}

//division by zero
int divide(int a, int b) {
    if (b == 0) {
        return -99999;
    }
    return a / b;
}

int calculate(int a, int b, char op) {
    switch (op) {
        case '+':
            return add(a, b);
        case '-':
            return subtract(a, b);
        case '*':
            return multiply(a, b);
        case '/':
            return divide(a, b);
        default:
            return -99999;
    }
}
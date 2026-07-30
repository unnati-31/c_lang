#include <stdio.h>

// understanding pointers and their concepts

int main() {

    //declaring variables
    int age = 18;
    char grade = 'A';
    
    //declaring the pointers for the above variables
    int *age_ptr = &age;
    char *grade_ptr = &grade;

    //printing the values using dereference operator
    printf("Age: %d\n", *age_ptr);
    printf("Grade: %c\n", *grade_ptr);

    //updating the values of the variables using pointers
    *age_ptr = 20;
    *grade_ptr = 'B';

    //printing the updated values using the variables
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
}
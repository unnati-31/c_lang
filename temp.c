#include <stdio.h>

float convertTemp(float celsius, char unit) {
    if(unit == 'F') {
        return (celsius * 9.0/5/0) + 32;
    }
    else if(unit == 'K') {
        return celsius + 273.15;
    }
    else {
        return -1;
    }
}

int main() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    char unit;
    printf("Enter unit to convert to (F/K): ");
    scanf(" %c", &unit);
    
    float result = convertTemp(celsius, unit);
    
    if (result == -1) {
        printf("Invalid input\n");
    }
    else {
        printf("Converted Temperature: %.2f", result);
    }

    return 0;
}
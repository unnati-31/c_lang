#include <stdio.h>

float calculateAverage(int grades[], int size) {
    float sum = 0.0;
    float avg;
    for(int i = 0; i < size; i++) {
        sum += grades[i];
        avg = sum / size;
    }
    return avg;
}

int findHighestMark(int grades[], int size){
    int max = grades[0];

    for(int i = 0; i < size; i++) {
        if(grades[i] > max) {
            max = grades[i];
        }
    }
    return max;
}

char determineletterGrade(int grade) {
    if(grade >= 90 && grade <= 100) {
        return 'A';
    } else if (grade >= 80 && grade <= 89) {
        return 'B';
    } else if (grade >= 70 && grade <= 79) {
        return 'C';
    } else if (grade >= 60 && grade <= 69) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int size; 
    printf("Enter the number of students: ");
    scanf("%d", &size);

    int grades[size];
    for(int i = 0; i < size; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    float average = calculateAverage(grades, size);
    printf("Average marks: %.2f\n\n", average);

    int highest = findHighestMark(grades, size);
    printf("Highest marks: %d\n\n", highest);
 
    for (int i = 0; i < size; i++) {
        char letterGrade = determineletterGrade(grades[i]);
        printf("Student %d: %d - %c\n", i+1, grades[i], letterGrade);
    }

    return 0;
}
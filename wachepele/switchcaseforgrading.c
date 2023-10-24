#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculateGrade(float average);

int main() {
    int subjects[8];
    int total;

    printf("Enter scores for 8 subjects:\n");
    for (int i = 1; i <=8; i++) {
        printf("Enter score for subject %d: ", i );
        scanf("%d", &subjects[i]);
        total += subjects[i];
    }

    float average = (float)total / 8;
    printf("Average score: %.2f\n", average);

    calculateGrade(average);

    return 0;
}

void calculateGrade(float average) {
    char grade;

    switch ((int)average / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'E'; // Failed
            break;
    }

    printf("Grade: %c\n", grade);
}

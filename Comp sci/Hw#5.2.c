//Question number 2 for Homework 5

#include <stdio.h>

void letter_grade(float score, char* pGrade, int* pJust_missed) {
    if (score >= 90) {
        *pGrade = 'A';
    } else if (score >= 80) {
        *pGrade = 'B';
    } else if (score >= 70) {
        *pGrade = 'C';
    } else if (score >= 60) {
        *pGrade = 'D';
    } else {
        *pGrade = 'F';
    }

    if  ((*pGrade != 'A' && (90 - (int)score) <= 1) ||
    (*pGrade != 'B' && (80 - (int)score) <= 1) ||
    (*pGrade != 'C' && (70 - (int)score) <= 1) ||
    (*pGrade != 'D' && (60 - (int)score) <= 1))
     {
        *pJust_missed = 1;
    } else {
        *pJust_missed = 0;
    }
}

int main() {
    float score;  
    char grade;
    int just_missed;
    printf("Enter you number grade: ");
    scanf("%f", &score);


    letter_grade(score, &grade, &just_missed);

    printf("Score: %.1f\n", score);
    printf("Letter Grade: %c\n", grade);
    if (just_missed) {
        printf("Just missed the next higher grade.\n");
    }

    return 0;
}

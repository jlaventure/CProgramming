/*
The program determines whether the student passed or failed

*/

#include <stdio.h>

int main(void) {
    int grade = 0;

    printf("Enter the grade:");
    scanf("%d", &grade);

    if (grade >= 60) {
        puts("Passed");
    }
    else {
        puts("Failed");
    }



    return 0;
}
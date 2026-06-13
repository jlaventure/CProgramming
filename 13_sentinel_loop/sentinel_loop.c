/*
Calculate the sum of entered grades
*/



#include <stdio.h>


int main(void) {
    int current_student = 1;
    int grade_input = 0;
    int total_grade = 0;

    // Getting the grade
    printf("Enter the grade for student %d (-1 to exit): ", current_student);
    scanf("%d", &grade_input);

    // Sentinel Loop

    while (grade_input != -1) {
        total_grade += grade_input;
        current_student++;
        printf("Enter the grade for student %d (-1 to exit): ", current_student);
        scanf("%d", &grade_input);
    }

    printf("The total grade is %d\n", total_grade);
    printf("The average grade is %lf\n", (double) total_grade / (current_student - 1));

return 0;
}
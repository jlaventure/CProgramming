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

return 0;
}


/*
Calculate the sum of entered grades with average
*/



#include <stdio.h>


int main(void) {
    int current_student = 1;
    int grade_input = 0;
    int total_grade = 0;

    // Getting the grade
    printf("Enter the grade for student %d (-1 to exit): ", current_student); // (-1 to exit) is what tells the loop when to stop
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

 char input;
    int number;

    // Get the character ---- initialization variable will be created ONCE before the "do", so int i = 3 goes before "do"
    
    do { 
    printf("Enter and uppercase character: ");
    scanf(" %c", &input);
    } while (input < 'A' || input > 'Z');

    printf("Your character is %c\n", input);


    // Scan a positive integer
     do {
        printf("Enter a positive number: ");
        scanf(" %d", &number);

     } while (number <= 0);
    
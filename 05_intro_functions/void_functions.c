/*
Introduction to void functions in C.
*/

#include <stdio.h>

// Function definition
void printCourseWithNumber(int course_number) {
    printf("You are in COP%d course\n", course_number);
}

void printCourse(void) {
printf("You are in COP2271 course\n");
}

int main(void) {
    // Call printCourse function
    printCourse();
    printCourse();

    int number = 1234;
    printCourseWithNumber(number);

    return 0;
}
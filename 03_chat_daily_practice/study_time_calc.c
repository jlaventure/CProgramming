#include <stdio.h>

/*
CHAT GPT TASK: Study-Time Calculator
-Ask the user how many minutes they studied on three different days
-Calculates the total number of minutes studied
-Calculates the average number of minutes studied per day
-Converts the total study time into: whole hours and remaining minutes
-Displays all results 
*/


int main(void) {
    int day1;
    int day2;
    int day3; 
    int total_minutes;
    int hours;
    int remaining_minutes;
    double average;

    printf("Enter minutes studied on day 1: \n");
    scanf("%d", &day1);
    printf("Enter minutes studied on day 2: \n");
    scanf("%d", &day2);
    printf("Enter minutes studied on day 3: \n");
    scanf("%d", &day3);
    printf("\n");

// Calculations

// Total Study Time
    total_minutes = day1 + day2 + day3; 
// Average Study Time
    average = total_minutes / 3.0; //"total / 3" produces 63.00; "total / 3.0" produces 63.33, which is what we want.
// Converted Time
    hours = total_minutes / 60;
    remaining_minutes = total_minutes % 60;


    printf("Total study time: %d minutes\n", total_minutes);
    printf("Average study time: %.2lf minutes\n", average);
    printf("Converted time: %d hours and %d minutes\n", hours, remaining_minutes);

    
    return 0;
}
#include <stdio.h>

/*Warm-Up Task: Minutes --> Hours and Minutes
Ask the user to enter a number of minutes. Then convert the numbers into 
complete hours and remaining minutes*/

int main(void){
    int totalMinutes;
    int hours;
    int remainingMinutes;

    printf("Enter the total number of minutes: ");
    scanf("%d", &totalMinutes);
    printf("\n");

    // Calculations
    hours = totalMinutes / 60;
    remainingMinutes = totalMinutes % 60;

    printf("%d minutes is %d hour(s) and %d minute(s)", totalMinutes, hours, remainingMinutes);
    printf("\n");


    return 0;
}

/*
Terminal should look like:
Enter the total number of minutes: 197 

197 minutes is 3 hour(s) and 17 minute(s)
*/
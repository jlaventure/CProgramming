/*
The program converts the given number to HMS.
65 seconds -> to 0 hours 1 minutes 5 seconds
3695 seconds -> 1 hour 1 minute 35 seconds

*/

#include <stdio.h>

int main(void) {
    int seconds = 0;
    int minutes = 0;
    int hours = 0;
    int remaining_seconds = 0;
    int remaining_minutes = 0;

    // Get the number of seconds
    puts("Enter the number of seconds");
    scanf("%d", &seconds);

    // Calculate the number of minutes
    minutes = seconds / 60;
    remaining_seconds = seconds % 60; // seconds - (minutes * 60);

    // Calculate the number of hours
    hours = minutes / 60;
    remaining_minutes = minutes % 60;

    // Print the result
    printf("%d seconds is", seconds);
    printf("%d hours and ", hours);
    printf("%d minutes and %d seconds\n", remaining_minutes, remaining_seconds);



    return 0;
}
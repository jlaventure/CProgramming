/*
Create a function named checkInput. The function takes two integers.
    Returns 1 if the 1st integer is divisible by 2nd integer and by (second - 3) integer
    Returns 2 if the 1st integer is divisible by the 2nd integer or by (second - 3) integer
    Returns 3 if the 1st integer not divisible by the 2nd integer or by (second - 3) integer

    in the main, call the function and print the appropriate message.

*/

#include <stdio.h>

// Step 1: Function Prototype - "Here is the code that will be used later on"

int checkInput(int first_integer, int second_integer);

int main(void) {
    int first_integer;
    int second_integer;
    int result;

    printf("Enter first integer: ");
    scanf("%d", &first_integer);

    printf("Enter second integer: ");
    scanf("%d", &second_integer);

    // Step 3: Function Call - Runs/Uses the Function, "Use the Function now!"/"Do your job now!"
    result = checkInput(first_integer, second_integer);

    // Step 4: Required Result - What will be the output/ printed end results
    if (result == 1) {
        printf("1\n");
    }
    else if (result == 2) {
        printf("2\n");
    }
    else {
        printf("3\n");
    }
    return 0;
}
    
// Step 2: Function Defenition - Manual for Function; Calculations and Logical Operators Here
int checkInput(int first_integer, int second_integer) {
    if (first_integer % second_integer == 0 && first_integer % (second_integer - 3) == 0) {
        return 1;
    }
    else if (first_integer % second_integer == 0 || first_integer % (second_integer - 3) == 0) {
        return 2;
    }
    else {
        return 3;
    }
}

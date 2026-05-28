/*
    Logical operator

    && - logical "AND"
    || - logical "OR"
    ! - logical "NOT"
*/

/*
    Create a function named checkInput. The function takes two integers.
    Returns 1 if the 1st integer is divisible by 2nd integer and by (second - 3) integer
    Returns 2 if the 1st integer is divisible by the 2nd integer or by (second - 3) integer
    Returns 3 if the 1st integer not divisible by the 2nd integer or by (second - 3) integer

    in the main, call the function and print the appropriate message.
*/

#include <stdio.h>

int main(void) {
    int input;

    // Scan the input
    printf("Enter your input: ");
    scanf("%d", &input);

    // Check the input
    /*if (input > 0) {
        if (input < 100) {
            if (input % 2 == 0) {
                puts("valid input");
            }
            else {
                puts("invalid input");
            }
            else {
                puts("invalid input");
            }
            else {
                puts("invalid input");
            }
        }
    }
        */

        // Use logical operators
        if (input > 0 && input < 100 && input % 2 == 0) {
            puts("valid input");
        }
        else {
            puts("invalid input");
        }

    return 0;
}
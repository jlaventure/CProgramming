/*
Introduction to variables in C.
Lecture 2
*/

#include <stdio.h>

int main(void) {
    // Create a variable
    int first_number;
    // Assign the value to a variable
    first_number = 100;

    // Create and initialize
    int second_number = 300;

    // Problem 1: Addition
    // Get the values from the keyboard
    printf("Enter the first integer:");
    scanf("%d", &first_number);

    printf("Enter the second integer:");
    scanf("%d", &second_number);


    // Print values of variables
    printf("The first number is %d\n", first_number); // %d - conversion specifier
    printf("The second number is %d\n", second_number); // %d - conversion specifier


    // Calculate the sum
    int sum = first_number + second_number;

    printf("%d + %d = %d\n", first_number, second_number, sum);

    // Problem 2: Subtraction
    // Get the values from the keyboard
    printf("Enter the first integer:");
    scanf("%d", &first_number);

    printf("Enter the second integer:");
    scanf("%d", &second_number);

    // Calculate the difference
    int difference = first_number - second_number;

    printf("%d - %d = %d\n", first_number, second_number, difference);
    

    // Problem 3: Multiplication
    // Get the values from the keyboard
    printf("Enter the first integer:");
    scanf("%d", &first_number);

    printf("Enter the first integer:");
    scanf("%d", &second_number);

    // Calculate the product
    int product = first_number * second_number;

    printf("%d * %d = %d\n", first_number, second_number, product);


    // Problem 4: Division
    // Get the values from the keyboard
    printf("Enter the first integer:");
    scanf("%d", &first_number);

    printf("Enter the second integer:");
    scanf("%d", &second_number);

    // Calculate the quotient
    int quotient = first_number / second_number;

    printf("%d / %d = %d\n", first_number, second_number, quotient);

    // Problem 5: Remainder
    // Get the values from the keyboard
    printf("Enter the first integer:");
    scanf("%d", &first_number);

    printf("Enter the second integer:");
    scanf("%d", &second_number);

    // Calculate Remainder
    int remainder = first_number % second_number; 

    printf("%d %% %d = %d\n", first_number, second_number, remainder);



    return 0;
}
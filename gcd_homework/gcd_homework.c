/*
Assignment 5, Problem 3: GCD

The goal of this assignment is to develop a C program that scans, displays, and reduces 
common fractions. You will write functions to find the greatest common divisor (GCD), 
print a fraction, scan a fraction from user input, 
and reduce a fraction to its simplest form. 
*/

#include <stdio.h>
#include <stdlib.h>

// Required Functions
int findGCD(int n1, int n2);
void printFraction(int num, int denom);
void scanFraction(int *num_ptr, int *denom_ptr);
void reduceFraction(int *num_ptr, int *denom_ptr); 

int main(void) {
    int num;
    int denom;


/*Note to self for Function Calls
- For "int" functions or NON-VOID functions, write something along the lines of
int "result" = "function name(parameters)."
- For VOID functions, its usually just "function name(parameters)."
*/
scanFraction(&num, &denom);

/*Function Call, Note: not all functions need to be called in the main.

Example: the findGCD function does not need to be called into the main. 
That function will be used for Function 4*/
printf("The entered fraction> ");
printFraction(num, denom);
printf("\n");

reduceFraction(&num, &denom);

printf("The reduced fraction> ");
printFraction(num, denom);
printf("\n");


    return 0;
}

// Function 1
int findGCD(int n1, int n2) {
    int g = abs(n1); // abs function is: abs( ).
    int p = abs(n2);
    int r = g % p;

    while (r != 0) {
        g = p; 
        p = r; 
        r = g % p;
    }
    return p; 
}

// Function 2
void printFraction(int num, int denom) {
    /*
    Note to self: in this function defenition, you tried to write:
    "int num;
    int denom;""
    These are already delcared in the function parameters itself, so you do not need
    to write them again within in the function/ reinitialize them.
    */
    
    printf("%d/%d", num, denom); // Save "The entered fraction" sentence for main function

}

// Function 3
void scanFraction(int *num_ptr, int *denom_ptr) {
    printf("Enter numerator> ");
    scanf("%d", num_ptr);

    printf("Enter denominator> ");
    scanf("%d", denom_ptr); 
    /*
    Reminder: 
    just "num_ptr" and "denom_ptr" store addresses
    "*num_ptr" and "*denom_ptr" store the VALUES at those addresses
    */

    while (*denom_ptr == 0) { 
        printf("Invalid, reenter denominator\n");
        printf("Enter denominator> ");
        scanf("%d", denom_ptr);
        /*
        We are putting this while loop here (in function defentiion) 
        because this function is READING the fraction. 
        If the fraction reads a zero in the denominator, 
        it is "Invalid." The while loop is PART of the job of this function, not the 
        main focus of the entire code (!main()).
        */
    
    }

}

// Function 4
void reduceFraction(int *num_ptr, int *denom_ptr) {
    int gcd = findGCD(*num_ptr, *denom_ptr); // Function 1 beng used for this function.

    *num_ptr = *num_ptr / gcd;
    *denom_ptr = *denom_ptr / gcd;

}
/*
Random Numbers Assignment

Display a table showing each random number with its sequence number (starting from 1):

Step 1: Format the table with vertical bars (|) and fixed-width columns for readability (use 
%-5.3d for sequence numbers and %5d for random numbers).

%: Indicates the start of a conversion specifier.

-: The minus sign means left-align the output within the specified width. Without this,
the output would be right-aligned by default.

5 (Width): The output will occupy at least 5 character spaces. If the number has fewer
digits, it will be padded with spaces (on the right, due to left-alignment).

.3 (Precision): For integers, this specifies the minimum number of digits to display. If the
number has fewer digits, it will be padded with leading zeros to reach at least 3 digits.

d (Type): Indicates the argument is a decimal integer.

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    unsigned int seed;
    int minimum;
    int maximum;
    int n;


    printf("Enter random number seed: ");
    scanf("%u", &seed);

    srand(seed); // seed to initialize random number generator

    printf("Enter the minimum random number: ");
    scanf("%d", &minimum);

    printf("Enter the maximum random number: ");
    scanf("%d", &maximum);

    printf("Enter the number of random numbers: ");
    scanf("%d", &n);


    // Loop: Generating a table and random numbers

    int randomNumber;
    int sum = 0;
    int i = 1;
    printf("-------------\n");

    while (i <= n) {
       randomNumber = minimum + rand() % (maximum - minimum+ 1); // Calculates each random number using formula
       printf("|%-5.3d|%5d|\n", i, randomNumber); // Creates a table
       sum = sum + randomNumber;

        i++;
        
    }

    printf("-------------\n");
    printf("The sum is: %d\n", sum);
     
    return 0;
}
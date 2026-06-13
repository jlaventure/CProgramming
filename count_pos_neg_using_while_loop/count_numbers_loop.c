/*
Homework Practice - Counting Positive and Negatives assignment

"Wrie a C program that reads an unspecificed numer of integers
and determines how many positive and negative values have been read. 
Your program ends with the input 0."
*/

#include <stdio.h>

int main(void) {

    int num; // input value
    int positives = 0; // counter/initalization for positive numbers
    int negatives = 0; // counter/ initialization for negative numbers
    printf("Enter integer values. The program will exit when you enter 0.\n");
    scanf("%d", &num);

    // Loop: "unspecified number"/"Enter 0" indicates to me that this may be a sentinel loop. Use "while loop" for this.
    // for loop: when you know/can predict how many times a loop will repeat/end (Ex: 1 to n, n is what the user inputs/their choice)
    // while loop: for when you don't know how many repetitions there will be/how many numbers the user will enter
    // do...while loop: when the loop must run at least once

    //while loop structure: initialize (before loop), while(condition) {printf; increment/decr;}
    
    //num != 0: condition is false when number is zero; the loop will end when user enters 0.
    while(num != 0) {
        if(num > 0) {
            positives++;
        }
        else if(num < 0) {
            negatives++;
        }
        scanf("%d", &num);

    }
    /*Why "negatives++"" instead of "negatives--" ? 
    negatives is a counter, not the negative number itself.
    
    negatives++: each time user enters a negative number, counter goes up by 1. 
    (number of negatives is 1. number of negatives is 2, etc.)

    negatives--: each time user enters a negative number, counter goes down by 1. 
    (number of negatives is -1, number of egatives is -2, etc)
    */ 


    printf("The number of positives is %d\n", positives);
    printf("The number of negatives is %d\n", negatives);



    return 0;
}

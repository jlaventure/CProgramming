/*
Homework Practice - Sum of Numbers
*/

#include <stdio.h>

int main(void) {
    int n;
    int sum = 0; // Setting sum = 0 is very important for intialization
    int i;
    // Basic Structure of the for-loop
    /*for(initialize, condition, increment) {
        Use if statement for stricter conditions
    }*/
    printf("Enter the number: ");
    scanf("%d", &n);

    // for: i starts at 1, i will be less than or equal to n
    // i++: After this loop round finishes, increase loop round (i) by 1. i =1 (round 1), i++ i=2 (round 2) i++ i=3 (loop round 3)...
    // if: i is divisible by 5 the remainder should be 0, sum += i: if true, add i and check condition again
    // Note: if (i % 5 == 1): This means if i divides by 5 there should be a remainder of 1 
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            sum += i;
        }
        
    }

    printf("The sum is: %d\n", sum);

    return 0;
}
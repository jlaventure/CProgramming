/*
Using break and continue statements to control loops.

Calculate the sume of entered numbers
*/
#include <stdio.h>

int main(void) {
    int sum = 0; 
    int num = 0;

    // Create an infinite while loop
    while (1) {
        puts("Enter the number to sum (0 to exit)");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }
        else if (num < -100 || num >100) {
            continue; // With this, it will skip the sum += num and just go straight back to outer loop.
                      // continue: skips the remaining statements in the body of that control statement and performs next iteration of loop
        }

        sum += num;
    
    }

    printf("The sum is %d\n", sum);


    return 0;
}
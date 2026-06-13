#include <stdio.h>

/*
Split the given 2 digit number into tens and ones.
Return 0 if the number is 2 digit and 1 otherwise.

*/

int splitDigits(int n, int* tens_ptr, int* ones_ptr);

int main(void) {
    int a = 16;
    int tens = 0;
    int ones = 0;

    while(1) {
        printf("Enter the number (0 to exit) ");
        scanf("%d", &a);

        
        if (a == 0) {
            break;
        }
        else if (a == 93 || a == 45) {
            continue;
        }

        if (splitDigits (a, &tens, &ones) == 0) {
        printf("Tens is %d; one is %d\n", tens, ones);
    }
    }



    return 0;
}

int splitDigits(int n, int* tens_ptr, int* ones_ptr) {
    if (n < 10 || n > 99) {
        return 1;
    }
    *tens_ptr = n / 10; //Dereferencing tens_ptr and n/10 replaces the value that was initially in tens_ptr
    *ones_ptr = n % 10;
    return 0;

}
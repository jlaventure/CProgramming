/*
Homework Practice 3 - Two Digit Lottery Simulator
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 2


void lottery(int *lottery_pick);

int main(void) {
    unsigned seed;
    int first_p;
    int second_p;

    int a[SIZE] = {0,1};

    
    printf("Input seed: ");
    scanf("%u", &seed);
    srand(seed);


    printf("Enter first pick: ");
    scanf("%d", &first_p);
    printf("Enter second pick: ");
    scanf("%d", &second_p);

    a[0] = first_p;
    a[1] = second_p;

    lottery(a);



    return 0;
}


// Function Defenition
void lottery(int *lottery_pick) {
int digit_one;
int digit_two;

// "Generate two random digits"
digit_one = rand() % 9 + 1; // rand() % (max - min + 1) + min
digit_two = rand() % 9 + 1;

printf("The lottery number is %d%d\n", digit_one, digit_two);

// "Compare with user picks and print EXACTLY ONE of the following (prompts in assignment)"
if (lottery_pick[0] == digit_one && lottery_pick[1] == digit_two) {
    printf("Exact match: you win $10,000\n");
}
else if (lottery_pick[0] == digit_two && lottery_pick[1] == digit_one) {
    printf("Two digits match: you win $3,000\n");
}
else if (lottery_pick[0] == digit_one || lottery_pick[0] == digit_two ||
        lottery_pick[1] == digit_one || lottery_pick[1] == digit_two) {

    printf("One digit match: you win $1,000\n");
}
else {
    printf("No match\n");
}

}
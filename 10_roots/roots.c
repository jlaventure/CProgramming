/*

The program that calculates the roots of quadratic equation.
ax^2 + bx + = 0

*/

// Function prototypes

void printPrompt(char coeff);
int getCoefficient(void);
int calculateDiscriminant(int a, int b, int c);
void printRoots(int a, int b, int c);


#include <stdio.h>
#include <stdbool.h>

int main(void) {


    // Function Call
    printPrompt('a');
    int a = getCoefficient();

    printPrompt('b');
    int b = getCoefficient();

    printPrompt('c');
    int c = getCoefficient();


    return 0;
}

// Function Description
void printPrompt(char coeff) {
    printf("Enter the coefficient %c: ", coeff);
}

int getCoefficient(void) {
    int c;
    scanf("%d", &c);

    return c;
}

int calculateDiscriminant( int a, int b, int c) {
    return (b * b) - (4 *a *c);
}

void printRoots(int a, int b, int c){
    //TODO
    /*
    if discr <0 -> no roots
    else if discr == 0 -> 1 root
    else 2 roots
    
    */
   
}



/*
Lab 5 - Nested Loops
*/

#include <stdio.h>

// Four function Prototypes
void printTriangleTopRight(int n);
void printTriangleTopRightDigitsAsc(int n);
void printTriangleTopRightDigitsDes(int n);
void printPyramid(int n);


int main(void) {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Invalid input. Enter a positive integer: ");
        scanf("%d", &n);
    }
    
    


// Four Function Calls
printTriangleTopRight(n);
printf("\n");

printTriangleTopRightDigitsAsc(n);
printf("\n");

printTriangleTopRightDigitsDes(n);
printf("\n");

printPyramid(n);


    return 0;
}



// Function Def 1
void printTriangleTopRight(int n) {
    for(int row = 0; row < n; row++) {

        //Printing spaces
        for (int space = 0; space < row; space++) {
            printf(" ");
        }

        //Printing Stars
        for (int star = 0; star < n - row; star ++) {
            printf("*");
        }

        printf("\n");

    }
    
}

// Function Def 2
void printTriangleTopRightDigitsAsc(int n) {
    for(int row = 0; row < n; row++) {

        //Printing spaces
        for (int space = 0; space < row; space++) {
            printf(" ");
        }

        //Print ascending numbers
        for (int num = row + 1; num <= n; num++) {
            printf("%d", num);
        }

        printf("\n");

    }
    

}

// Function Def 3
void printTriangleTopRightDigitsDes(int n) {
    for (int row = 0; row < n; row++) {

        //Printing spaces
        for (int space = 0; space < row; space++) {
            printf(" ");
        }

        //Printing descending numbers
        for (int num = n; num >= row + 1; num--) {
            printf("%d", num);
        }

        printf("\n");
    }
}

// Function Def 4
void printPyramid(int n) {
    for(int row = 0; row < n; row++) {
        
        //Printing Spaces
        for (int space = 0; space < n - row - 1; space++) {
            printf(" ");
        }

        //Printing stars
        for (int star = 0; star < 2 * row + 1; star++) {
            printf("*");
        }

        printf("\n");

    }

}


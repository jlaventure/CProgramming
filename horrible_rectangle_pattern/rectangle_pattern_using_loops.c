/*
Homework Practice - Checkerboard Pattern Printing

*/

#include <stdio.h>

// Function Prototype
void printLine(char c, int n);
void printLinePattern(char c1, char c2, int n);
void printCheckerboard(char c1, char c2, int size);
void printColumnSwapCheckerboard(char c1, char c2, int size);

int main(void) {
    char c;
    char c1;
    char c2;
    int n;


    scanf(" %c", &c1);
    scanf(" %c", &c2);
    scanf("%d", &n);
    


// Function Call
printLine(c1, n);
printLinePattern(c1, c2, n);
printCheckerboard(c1, c2, n);
printColumnSwapCheckerboard(c1, c2, n);

    return 0;
}


// Function Defenition

//Function 1
void printLine(char c, int n) {
    int i = 1;

     while(i <= n) {
        printf("%c", c);

        if(i < n) {
            printf(" "); // (" ") means to print a space
        }
            i++; 
    } 
    printf("\n");
}

//Function 2
void printLinePattern(char c1, char c2, int n) {
    int i = 1;
// i % 2 used for odd/even numbers
// i % 2 = 1: i is odd
// i % 2 = 0; i is even
    while (i <= n) {
        // "... alternating between c1 and c2"... alternating indicates odd/even numbers (i % 2)
        if(i % 2 == 1) {
            printf("%c", c1);
        }
        else {
            printf("%c", c2);
        }
        // After loop, print spaces
        if (i < n) {
            printf(" ");
        }
        i++;
    }
    printf("\n");
}


//Function 3
void printCheckerboard(char c1, char c2, int size) {
    int row = 1;

/*
(Using while loop from printLinePattern): just replace "i" with "rows" and "n" with "size"
...well you arent really replacing, you are just using a different name for the same value 

Assignment says "prints a checkerboard pattern of size "size x size""
This does not literally mean write size x size into the code/condition. 
size x size means: print "size" rows (i), and each row has "size" characters (n).
*/
    while (row <= size) {
        // "... alternating between c1 and c2"... alternating indicates odd/even numbers (row % 2)
        if(row % 2 == 1) {
            printLinePattern(c1, c2, size);
        }
        else {
            printLinePattern(c2, c1, size); //Notice its (c2,c1) and not (c1, c2) to alternate characters
        }
        row++;
    }
/* 
You do not need to include the "if (i < n), printf (" ")"":
1) Because there is no i or n in this function
2) This is already being addressed in the printLinePattern Function
*/
    }


//Function 4
void printColumnSwapCheckerboard(char c1, char c2, int n) {
    int row = 1;

    while (row <= n) {

        if(row % 2 == 1) {
            printLine(c1, n);
        }
        else {
            printLine(c2, n);
        }
        row++;
    }

}
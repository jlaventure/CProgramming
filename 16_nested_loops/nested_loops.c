/*
Introduction and practice to Nested Loops
*/


#include <stdio.h>
#include <unistd.h> // usleep() --- makes execution slower

void printRectangle(int rows, int cols);
void printTriangleTopLeft(int size);
void printTriangleBottomLeft(int size);
void printTriangleBottomRight(int size);

int main(void) {
    int rows, cols, size;

    // Get input
    do {
        printf("Enter rows and columns: ");
        scanf("%d%d", &rows, &cols);
    } while(rows <= 0 || cols <= 0);

    // Print Rectangle - Function Call
    printRectangle(rows,cols);

    // Get the size - Triangle
    /*do {
        printf("Enter triangle size: ");
        scanf("%d", &size);
    } while(size <= 0);*/

    // Print Triangle
    /*for(int i = 0; i < 1000; i++) {
    printTriangleTopLeft(size);
    printTriangleBottomLeft(size);
    }*/

    /*printTriangleBottomRight(size);*/
    

    return 0;
}
// printRectangle now works, just make sure to include "get input" section
void printRectangle(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            // For Corners
            if((i == 0 && j == 0) || 
            (i == 0 && j == cols - 1) || 
            (j == 0 && i == rows -1) || 
            (i == rows - 1 && j == cols -1)){
                printf("%c", 'o');
            }

            // Edges that are not corners
            else if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("%c", '*');
            }

            // Inside the rectangle
            else {
                printf("%c", ' ');
            }
        }
        printf("\n");
    }

}
/*void printTriangleTopLeft(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i; j++) {
            printf("%c", '*');
        }
        puts("");
    }

}
void printTriangleBottomLeft(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", '*');
            usleep(3000);
        }
        puts("");
    }*/

    //The printTriangleBottom Right code works now
/*void printTriangleBottomRight(int size) {
    for (int i = 0; i < size; i++) {
        // Print leading Spaces
        for (int j = 0; j < size - 1 - i; j++) {
            printf("%c", ' ');
        }
        // Print stars
        for (int j = 0; j <= i; j++) {
            printf("%c", '*');
        }
        
    puts("");
}
}*/ 



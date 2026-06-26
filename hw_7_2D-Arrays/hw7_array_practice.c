/* Homework 7, Problem 1 - 2D Array*/

#include <stdio.h>
#include <stdlib.h> // Random Number Generator


// Function Prototype
void print_row(int rows, int cols, const int a[rows][cols], int row_num); // Function 1
void print_col(int rows, int cols, const int a[rows][cols], int col_num); // Function 2
void rand_init(int rows, int cols, int a[rows][cols]); // Function 3
void print(int rows, int cols, const int a[rows][cols]); // Function 4
void swap_rows(int rows, int cols, int a[rows][cols], int row1, int row2); // Function 5




int main(void) {
    //Per "test scenario" set up in assignment
    srand(10);
    
    int d[5][3];

    rand_init(5, 3, d);
    print(5, 3, d);

    print_row(5, 3, d, 0);
    print_col(5, 3, d, 1);

    print(5, 3, d);
    swap_rows(5, 3, d, 0, 1);
    print(5, 3, d);


    return 0;


}

// Function 1 - Print a Selected Row ("keep row fixed, move across columns")
void print_row(int rows, int cols, const int a[rows][cols], int row_num) 
{
    for (int j = 0; j < cols; j++) {
        printf("%4d", a[row_num][j]);
    }
    printf("\n\n");
}

// Function 2 - Print a selected Column ("keep column fixe, move down the rows")
void print_col(int rows, int cols, const int a[rows][cols], int col_num) 
{
    for (int i = 0; i < rows; i++) {
        printf("%4d\n", a[i][col_num]);
    }
    printf("\n");
}

// Function 3 - Initialize Array and Random Values (The given range in assignment [0, 99])
void rand_init(int rows, int cols, int a[rows][cols]) 
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            a[i][j] = rand() % 100;
        }
    }


}

// Function 4 - Print Entire 2D Array (Nested Loop Here)
void print(int rows, int cols, const int a[rows][cols]) 
{
// Print an array: This loop belongs in this function defention, not the main function
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", a[i][j]); 
        }
        printf("\n");
        }
    printf("\n");
}

// Function 5 - Swap Two Rows ("To swap two rows, loop through every column and swap one element at a time")
void swap_rows(int rows, int cols, int a[rows][cols], int row1, int row2) 
{
    for (int j = 0; j < cols; j++) {
        int temp = a[row1][j];
        a[row1][j] = a[row2][j];
        a[row2][j] = temp;
    }
}
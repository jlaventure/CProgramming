
#include <stdio.h>

#define ROW 8
#define COL 8

void print(int rows, int cols, int arr[rows][cols]); // This is a "variable length array"
void setMainDiagonal(int rows, int cols, int arr[rows][cols], int value); // You need to fix this, it didnt print 10 diagonally all the way across
void setSecondDiagonal(int rows, int cols, int arr[rows][cols], int value); // TODO... "Use col - 1"


int main(void) {
    // Create a 2D array of integers
    int arr[ROW][COL] = {
        {1, 2, 3}, // Curly braces table initializes the array 
        {3, 4, 5},
        {6, 7, 8} // 40 Elements because ROW multiplied by COL (row*col = 5*8 = 40.. not 5*8 was used before ROW 8, COL 8)
    };

    //Access an element
    printf("%d\n", arr[0][1]);

    // Modify the value of an element
    arr[2][1] = 17;

    // Print an array
    /*printf or %d/c/ wont work for this... so we do a for loop or nested loop*/
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%4d", arr[i][j]); /// %4D means output will be every 4 spaces
        }
        puts("");
    }

    // Set the second row with 7's
    for (int j = 0; j < COL; j++) {
        arr[1][j] = 7;
    }

    // TODO Set the first column with 5's
    for (int j = 0; j < ROW; j++){
        arr[j][0] = 5;
    } // This is your own attempt and it did not work....fix this

    puts("\n");
    for (int i = 0; i < ROW; i++) { // Printing array for this task
        for (int j = 0; j < COL; j++) {
            printf("%4d", arr[i][j]); /// %4D means output will be every 4 spaces
        }
        puts("");
    }

    // Function Call for void print(int rows, int cols, int arr[rows][cols])
    puts("\n");
    print(ROW, COL, arr); // also, another way to print an array




    printf("\n");
    setMainDiagonal(ROW, COL, arr, 10);
    print(ROW, COL, arr);

    setSecondDiagonal(ROW, COL, arr, 10);
    print(ROW, COL, arr);




    return 0;
}

void print(int rows, int cols, int arr[rows][cols]) {
    puts("print"); // This line could be used as a debugging tool
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", arr[i][j]); /// %4D means output will be every 4 spaces
        }
        puts("");
    }
}

void setMainDiagonal(int rows, int cols, int arr[rows][cols], int value) {
    puts("setMainDiagonal");
    if (rows != cols) {
        puts("Not a matrix");
        return;
    }
    for (int i = 0; i < rows; i++) {
        arr[i][i] = value; // So it will be 0,0..1,1...2,2..etc
    }

}

void setSecondDiagonal(int rows, int cols, int arr[rows][cols], int value) {
    for (int i = 0, j = cols - 1; i < rows; i++, j--) {// For this condition, the comma's and semi-colons matter
        arr[i][j] = value; 

} 
}

/*Note: If something isnt working (such as 10 not printing across or the terminal is not exiting...)
this could mean that you're in an infinite loop somewhere. Check your main function*/

#include <stdio.h>
#include <string.h>

#define ROW 5
#define COL 5

double findSum(int rows, int cols, double arr[rows][cols]);

//Create a a function that calculates the sum of all the elements in a specified column in 2D array
double sumElements(int rows, int cols, double arr[rows][cols], int n);


int main(void) {
    char s[6];
    double arr[ROW][COL] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    arr[0][1] = 24.0;
    arr[2][2] = 43.0;

    double sum = findSum(ROW, COL, arr);
    printf("%.2lf\n", sum);
    arr[4][4] = sum - 350;


 // Print the table of array
     for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%10.2lf", arr[i][j]); // %10 means spaces each string out by 10 spaces. %.2lf is the decimical place 
        }
        puts("");
    }


    //Function call for sumElements
    for (int n = 0; n < COL; n++) {
        double total_sum = sumElements(ROW, COL, arr, n);

        //Assign each characters with the sum of each column of the array 
        s[n] = total_sum;

    }
    s[5] = '\0'; // s[6] is 6 chracters...but you subtract 1 for the null character..therefore s[5]
    printf("%s\n", s); // Its just "s" because thats the name of the string; you dont print s[n] because it prints a single character.

    
/*

Part 4: 
Subtract 12 from the value of a second chracter in the string ---> s[0][1] - 12
Add 34 to the value of the first chracter in the string
Subtract 38 from the value of a third chracter in the string

Add 1 to the value of the fourth chracter in the string
Subtract 24 from the value of a fifth character in the string
print the string

*/
s[1] = s[1] - 12;
s[0] = s[0] + 34;
s[2] = s[2] - 38;
s[3] = s[3] + 1;
s[4] = s[4] - 24;
printf("%s\n", s);


    return 0;
}

double findSum(int rows, int cols, double arr[rows][cols]) {
    int i = 0;
    int j = 0;
    double sum = 0;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += arr[i][j];
        }

    }
    return sum;

}

double sumElements(int rows, int cols, double arr[rows][cols], int n) {
    int i = 0;
    int j = 0;
    double total_sum = 0;

    for (i = 0; i < rows; i++) {
            total_sum = total_sum + arr[i][n]; // Calculates the sum of all elements in a specificed column
            /*int n is a place holder for columns... a specified column*/
        }
        return total_sum;

}






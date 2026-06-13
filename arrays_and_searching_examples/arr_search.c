#include <stdio.h>

int main(void) {

    /*size_t: data type represents an unsigned int and on others it represents unsigned long.
    Intitalizer List example (regarding array): 
    int n[5] = {24, 48, 192, -49, 4}; A syntax error would be int [n] = {32, 27, 54, 18, 95, 14} (because it has 6 numbers instead of 5).
    */


    int c[5] = {-45, 6, 0, 72, 1543} // initialize the elements of the array

    printf("%d", c[0] + c[2]);


    return 0;
}

// Example 1: arrays with functions
double d[3] = {1.1, 2.2, 3.3}

double sum(double* n, int size) {
    double sum_ = 0; // name cant match function name, so instead of double sum, you put double sum_

    for(int i = 0, i < size, i++) {
        sum = += n[i];
}
return sum_;

}

// Example 2: 
/*
Using constant arrays.

Searching in arrays.
*/

#define SIZE 10

void printDoubledArrays(const int* arr, int size); 
// const: cannot modify the values in the array function defenition. It will be a read-only for the function defenition

int main(void) {

    // Create an array
    int a[SIZE] = {1, 2, 3, 4};

    // Call the Function - To use the Function
    printDoubledArrays(a, SIZE);

/*If we print the array here, it will print 2, 4, 6, 8;
Anything you change in the function defenintion, will effect the numbers in the main. 


*/

    return 0;
}

void printDoubledArrays(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i] * 2);
    }
    puts("");

}


// Example 3:

#define SIZE 10

/*
Task:
Returns the index of the first zero value in the array
Returns -1 if there are no zeros
*/

int searchFirstZero(const int* arr, int size); // When we search, we dont modify, so use "const"

// If searching an array, you could use a for loop to search the array

int main(void) {

    // Create an array
    int a[SIZE] = {1, 2, 3, 4};

    // Call the Function - To use the Function
    

    return 0;
}

int searchFirstZero(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            return i; // return the index of the first zero.
        }
    }
    return -1;
}


// Example 4: (Assume its the same main function set up from the searchFirstZero example)
int searchLastZero(const int* arr, int size); // Fucntion prototype

/*printf("The first zero is at index %d\n", searchFirstZero(a, SIZE));
printf("The last zero is at index %d\n", searchLastZero(a, SIZE));

These can be written in the main function as Function Call*/

// Function Defen.
int searchLastZero(const int* arr, int size) {
    for (int i = size - 1; i >=0; i--) {
        if (arr[i] == 0) {
            return i;
        }
    }
    return -1;
}


// Example 5:
#include <stdbool.h>

/*
Create a function:
Check if the given charcater an uppercase
*/
bool isUpper(char c);
bool isLower(char c);
bool isDigit(char c);
bool isAlNum(char c);

int main(void) {
    char ch_input;


    do {
    printf("Enter a character: ");
    scanf(" %c", &ch_input);

    printf("isUpper('%c') = %d\n", ch_input, isUpper(ch_input));  
    printf("isUpper('%c') = %d\n", ch_input, isLower(ch_input));   
    printf("isUpper('%c') = %d\n", ch_input, isDigit(ch_input));  
    printf("isUpper('%c') = %d\n", ch_input, isAlNum(ch_input));  
 
    } while (ch_input != '.'); //(ch_input != '.'): an example of sentinel values




    return 0;
}

bool isUpper(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isLower(char c) {
    return c >= 'a' && c <= 'z';
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

bool isAlNum(char c) {
    return isUpper(c) || isLower(c) || isDigit(c);

} //Returns "True": if character is a letter or digit

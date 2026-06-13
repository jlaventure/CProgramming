/*
Intro to arrays in C.
*/

#include <stdio.h>

// Symbolic constant
#define SIZE 10 //Example verbiage: "define a symbolic constant Size with relacement text 10"

// Functions with arrays
void printArray(int* arr, int size); // Option 1: int arr[] (leave array box empty); 
                                     //Option 2: int* arr (location for element)/ int size (size of element)

int main(void) {
    // Create and array of 15 integers
    int arr[SIZE];

    // Initialize the first element with 999
    arr[0] = 999;

    // Initialize the last element with 111
    arr[SIZE - 1] = 111;

    // Initialize all the elements of the array
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
    }

    //Reinitialize with values (10, 20, 10, .... 10000)
    for (int i = 0; i < SIZE; i++) {
        arr[i] = (i + 1) * 10; }

    // Print an array
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    printArray(arr, SIZE); 


    return 0;
} 

void printArray(int* arr, int size) {
    printf("%c", '[');
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    puts (']');
}

/*
"Define a double array "d_arr" with the SIZE elements and intialize the elements to 0":
double d_arr [SIZE] = 0

"Print the second and last elements with two digits of precision to the right of the decimal point":
("%.2f%.2f\n", d_arr[1], d_arr[SIZE -1]);

*/
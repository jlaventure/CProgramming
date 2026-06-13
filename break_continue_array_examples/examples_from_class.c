/*
Using break and continue statements to control loops.

Calculate the sume of entered numbers
*/

// Example 1
#include <stdio.h>

int main(void) {
    int sum = 0; 
    int num = 0;

    // Create an infinite while loop
    while(1) {
        puts("Enter the number to sum");
        scanf("%d", &num);

        sum += num;
        break;
    }

    printf("The sum is %d\n", sum);


    return 0;
}


// Example 2
#include <stdio.h>

int main(void) {
    int sum = 0; 
    int num = 0;

    // Create an infinite while loop
    while (1) {
        puts("Enter the number to sum (0 to exit)");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        sum += num;
    
    }

    printf("The sum is %d\n", sum);


    return 0;
}


// Example 3 
#include <stdio.h>

int main(void) {
    int sum = 0; 
    int num = 0;

    // Create an infinite while loop
    while (1) {
        puts("Enter the number to sum (0 to exit)");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }
        else if (num < -100 || num >100) {
            continue; // With this, it will skip the sum += num and just go straight back to outer loop.
        }

        sum += num;
    
    }

    printf("The sum is %d\n", sum);


    return 0;
}

// Example 4
#include <stdio.h>

int main(void) {
    // Create and array of 15 integers
    int arr[15];

    // Initialize the first element with 999
    arr[0] = 999;

    // Initialize the last element with 111
    arr[14] = 111;

    // Initialize all the elements of the array
    for (int i = 0; i < 15; i++) {
        arr[i] = i + 1;
    }

    // Print an array
    for (int i = 0; i < 15; i++) {
        printf("%d", arr[i]);
    }


    return 0;
}



//Example 5
#include <stdio.h>

// Symbolic constant
#define SIZE 10000 

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


    return 0;
}

//Example 6
#include <stdio.h>

// Symbolic constant
#define SIZE 10 

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
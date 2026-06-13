/*
Introduction to pointers.
"int*" - Creation of pointer. int*; int * c; int *c; - Are all examples of ways to create a pointer
"*(pointer_variable_name)" - Dereferencing pointer
*/

#include <stdio.h>

int main(void) {
    int luck = 100;

    luck += 5;

    printf("The address of luck: %p\n", &luck); // %p is for pointers (a variable that stores the memory address, place to store luck)

    // Create a pointer variable (stores memory address)
    // data_type * pointer_variable_name; (To create pointer)

    // Integer pointer - "&luck" stores the address of luck_ptr
    int* luck_ptr = &luck; // Dont just put the name "luck"; luck_ptr = NULL (NULL:an initialization that points to nowhere)
    printf("The value of luck_ptr: %p\n", luck_ptr);

    // So: (int* luck_ptr) points to (int luck)

    // Access the data the pointer is pointing to
    // * - dereferencing operator
    printf("Dereference luck_ptr %d\n", *luck_ptr);

    // Modify the data through the pointer
    *luck_ptr = 200;
    printf("The value of luck: %d\n", luck);



    return 0;
}

/*
Why do we need pointers?


*/
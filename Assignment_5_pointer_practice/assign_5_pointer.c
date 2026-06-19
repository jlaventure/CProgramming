/*
Write a function isMultiple that takes two pointers to integers as arguments and 
determines whether the value pointed to by the second pointer is a multiple of the value 
pointed to by the first pointer. The function should return 1 if the second value is a multiple 
of the first value, and 0 otherwise. If the first value is 0, the function should return 0 to avoid 
division errors. 
*/
// Function Defenition

int isMultiple(int *n1, int *n2) { // Function akes two pointers to integers a, b

    if (*n1 == 0) {// "If first value is 0, return 0"

        return 0;
    }
    if (*n2 % *n1 == 0) { 
    /*"determines whether the value pointed to by the second pointer is a 
    multiple of the value pointed to by the first pointer; return 1"*/

        return 1;
    }
    else
    {
        return 0;// Otherwise 0.
    }
    
}
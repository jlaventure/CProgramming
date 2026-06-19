/*
Assignment 5 Problem 2

Write a void function squareOfTwoNumbers that takes two double parameters by 
reference and modifies their values by squaring them.  
Note: Submit only the function definition without the main function.
*/


// Function Defenition
void squareOfTwoNumbers(double *n1, double *n2) {// "void function that takes two parameters by reference"

    // "modifies the values of both by squaring them"
    *n1 = (*n1) * (*n1);
    *n2 = (*n2) * (*n2);

}
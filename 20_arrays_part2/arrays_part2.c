/*
Using constant arrays.

Searching in arrays.
*/
#include <stdio.h>

#define SIZE 10

void printDoubledArrays(const int* arr, int size); 
// const: cannot modify the array. It will be a read-only for the function defenition

/*
Task:
Returns the index of the first zero value in the array
Returns -1 if there are no zeros
*/

int searchFirstZero(const int* arr, int size); // When we search, we dont modify, so use "const"
int searchLastZero(const int* arr, int size);
int searchNthZero(const int* arr, int size, int n); // TODO: 

int searchLastNthTarget(const int* arr, int size, int n, int target); //TODO:
/*int searchLastNthTarget: "Search the array FROM THE END and return the index of the 
nth time you find "target"
So instead of searching for zero only, it searches for whatever number "target" is.

Breakdown -
search: Look through
Last: Start from back/end
Nth: Find the 1st, 2nd, 3rd, etc. occurence
Target: Search for a specific value, not just zero*/

// If searching an array, you could use a for loop to search the array

int main(void) {

    // Create an array
    int a[SIZE] = {1, 3, 4, 0, 8, 0, 5, 0, 3, 0}; 
    /* changed inta a[SIZE] = {1,2,3,4} to this, to test the NthZero function*/

    // Call the Function - To use the Function
    printDoubledArrays(a, SIZE);
    printf("The first zero is at index %d\n", searchFirstZero(a, SIZE));
    printf("The last zero is at index %d\n", searchLastZero(a, SIZE));

    printf("The nth zero is at index: %d\n", searchNthZero(a, SIZE, 2)); 
    // %d because this functin gives back an "int".

    printf("The second target from the end is at index: %d\n", searchLastNthTarget(a, SIZE, 2, 3));
    /* int searchLastNthTarget(a, SIZE, 2, 3):
    "Starting from the end of the array, find the second 3, and return its index"

    if it was (a, SIZE, 3, 3): 
    "Starting from the end of the array, find the third 3, and return its index"
    */
    


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


int searchFirstZero(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            return i; // return the index of the first zero.
        }
    }
    return -1;
}

int searchLastZero(const int* arr, int size) {
    for (int i = size - 1; i >=0; i--) {
        if (arr[i] == 0) {
            return i;
        }
    }
    return -1;
}

int searchNthZero(const int* arr, int size, int n) {
    int count = 0; 
    for (int i = 0; i < size; i++) /*Starting "for" condition for every array it seems*/ 
    {
        if (arr[i] == 0) {
            count++;

            if (count == n) {
                return i;
            }
        }
    }
    return -1;
} 
/*
(const int* arr): function is allowed to look at the array but cannot modify it.

int count = 0: creates a counter. It starts at zero because before the loop starts, 
we have found zero "zero."...translation "So far, I have found 0 zeros"

for(int i = 0; int < size; i++): This loop goes through the array from left to right

"i": is the index 
Ex: index:0 1 2 3 4 *This is what number element they are ... so i = 0, i = 1, etc.
    value:1 3 4 0 8 *This is values from array

i++: move to the next index each time

if (arr[i] == 0): checks whether the current array element is zero; means:
"is the value at this index equal to 0?"... "==" is used because you are comparing

count++: means "count the zeros"; Everytime the function finds a zero, it increases the count.
so, i = 0, value = 1 (Not a zero, count stays at zero)... 
i = 3, value = 0 (Found first zero, count becomes 1)
i = 4, value = 8 (Not a zero, count stays at 1)
i = 5, value = 0 (Found second zero, count becomes 2)

if(count == n): checks whether the zero you found is the one you wanted. 
So if n = 2, then you want the SECOND ZERO. So when "count" becomes 2, this condition is true.

return i; : sends back the index where the nth zero was found

return -1; : this only runs if the loop finishes and never finds the nth zero

*/

int searchLastNthTarget(const int* arr, int size, int n, int target) {
    int count = 0;

    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == target) {
            count ++;

            if (count == n) {
                return i;
            }
        }
    }
    return -1;
}



/*
The "linear search" compares each (every) element. 

"Binary search" eliminates from consideration one-half of the elements in a sorter array after each comparison;
Binary search locates the middle element of the array and compares it to the search key. (int searchKey, size_t low, size_t high)

To find middle: size_t middle (low + high) / 2;
if middle: return middle
if searchkey < middle: (high = middle - 1); //Searches low end of array
if searchkey > middle: (low = middle + 1); //Searches high end of array

If search is equal: element is returned.
If not equal: reduced by another one-half, keeps doing this until it equals element.

*/

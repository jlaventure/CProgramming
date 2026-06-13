/*
Using pointers
*/
#include <stdio.h>

void setToZero(int* n); // Pass by reference: (fun note to self - this is efficient to pass a large data object)

void swap(int* a, int* b);

int main(void) {
    int a = 10;
    int b = 15;


    printf("a before %d\n - %p\n", a, &a);
    setToZero(&a);
    printf("a after %d\n", a);

  


    //TODO test swap function

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);

    /*
    If you just put the swap(&a, &b) and not the printf's: 
    it will only give you the before and after numbers for "a" and not "b".
    */

    return 0;
}

void setToZero(int* pN) {
    *pN = 0;
    printf("pN - %p\n", pN);
}

void swap(int* a, int* b) {
    int tmp = *a; // to make tmp, a. 
    *a = *b; //make *a point to *b.
    *b = tmp; //put *b into tmp.

}

/*
Notes on pointers:

*/
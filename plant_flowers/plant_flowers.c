/*
Homework Practice 1 - Plant Flowers
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

void plantFlowers(int *flowerbed, int flowerbedSize);
int flowersToPlant(int *flowerbed, int flowerbedSize);

int main(void) {
    unsigned seed;
    int a[SIZE] = {0}; // ""= {0}"" intializes all 20 elements, do not just put " = 0"

    printf("Input seed: ");
    scanf("%u", &seed);
    srand(seed);

    //Function Call
    plantFlowers(a, SIZE); // calls the flower bed array and size (# of plots).



    // Printing the flowerbed
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", a[i]); //This means: print the value at the current index
    }
    printf("\n");
/* Printing the flower bed is basically like print a[0], print a[1], print a[2]...etc.
Arrays usually require a loop. Anytime you have an array and need to do something to 
EVERY ELEMENT, you should ask yourself "Do I need a loop?" The answer for this specific
problem is yes, because there are 20 elements, not just 1.*/



   // "Calculates how many flowers can be planted using flowersToPlant function"
    int total = flowersToPlant(a, SIZE); 

    printf("You can plant up to %d flowers\n", total);

    return 0;
}


void plantFlowers(int *flowerbed, int flowerbedSize) {
    for (int i = 0; i < flowerbedSize; i += rand() % 4 + 2) {
        flowerbed[i] = 1;
    }
}


int flowersToPlant(int *flowerbed, int flowerbedSize) {
    int count = 0; // Creating a counter

    for (int i = 0; i < flowerbedSize; i++) {
        if (flowerbed[i] == 0 && 
        (i == 0 || flowerbed[i - 1] == 0) && 
        (i == flowerbedSize - 1 || flowerbed[i + 1] == 0)) { 

            flowerbed[i] = 1;
            count++;
        }
    }
    return count;
}
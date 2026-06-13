/*

Intorduction to random number generation.

*/

#include <stdio.h>
#include <stdlib.h> // rand function
#include <time.h> 

int getRandomNumber(int min, int max);
void printRandomNumbers(int min, int max, int n);

int main(void) {

    srand(time(0));
    int min, max, n;
    scanf("%d%d%d", &min, &max, &n);
    printRandomNumbers(min, max, n);
    

    return 0;
}

int getRandomNumber(int min, int max){
    return rand() % (max - min + 1) + min;
}

void printRandomNumbers(int min, int max, int n) {
    int c = 1;
    while (c <= n) {
        printf("%d", getRandomNumber(min, max));
        c = c + 1;
    }
}

/* 
Introduction to loops
While loop
*/





#include <stdio.h>

void printHello(int times);



int main(void) {
    int n;
    printf("Enter n ");
    scanf("%d", &n);

    printHello(n);




    return 0;
}

void printHello(int times) {
    int c = 1;
    while(times > 0) {
        printf("%d Hello", c);
        times = times - 1;
        c = c +1;
    }
}

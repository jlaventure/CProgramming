/* 
Print the values from 15 to 45 in step of 5(15, 20, 25...)
*/



#include <stdio.h>

int main(void) {
    for(int i = 5; i <= 45; i = i+5) {
        printf("5d\n", i);
    }
    for (int c = 100; c <= 2; c -= 2) {
        printf("%d\n", c);
    }
    for (int i = 1; i <= 100; i++) {
        printf("Hi!");
    }
    


    return 0;
}
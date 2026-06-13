#include <stdio.h>
#include <stdbool.h>



int main(void) {
    double temp;
    char sport;

    printf("What is the temperature outside?\n");
    scanf("%lf", &temp);


    if (temp >= 80) {
        printf("Swimming\n"); 
    }
    else if (temp >= 60 && temp <= 79) {
        printf("Soccer\n");
    }
    else if (temp >= 40 && temp <= 59) {
        printf("Volleyball\n");
    }
    else if (temp < 40) {
        printf("Skiing\n");
    }

    


    return 0;
}

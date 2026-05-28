// Online C compiler to run C program online
#include <stdio.h>

// Functions prototypes - short description of function
void two(void);
void one_three(void);

int main() {
    printf("starting now:\n");
    
   // Function call
   one_three();
   
   printf("done!");
    return 0;
}

void one_three(void) {
    puts("one");
    two();
    puts("three");
}
void two(void) {
    puts("two");    
}

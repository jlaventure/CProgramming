/* 
Introducing do... while loop.
*/


#include <stdio.h>

int main(void) {
    char input;
    int number;
    int option;

    // Get the character
    
    do { 
    printf("Enter and uppercase character: ");
    scanf(" %c", &input);
    } while (input < 'A' || input > 'Z');

    printf("Your character is %c\n", input);


    // Scan a positive integer
     do {
        printf("Enter a positive number: ");
        scanf(" %d", &number);

     } while (number <= 0);



     // Enter an option, which is 1 or 2 only
     do {
        printf("Enter an option (1 (one line) or 2 (multiple lines)): ");
        scanf("%d", &option);
     } while (option != 1 && option != 2);

    for (int = 0; i < number; i++) {
        if (option == 1) {
            printf("%c", input);
        }
        else {
            printf("%c\n", input);
        }
    }

     



    return 0;
}
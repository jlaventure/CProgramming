/*
Homework Practice 2 - Text Statistics
*/

#include <stdio.h>
#include <ctype.h>
#include "string.h"


void text_statistics(const char *str);

int main(void) {

    char *str = get_string("Enter a string:\n"); 

    text_statistics(str); 

    return 0;
}

void text_statistics(const char *str) {
    int words = 0; 
    int uppercase = 0; 
    int lowercase = 0; 

    for (int i = 0; str[i] != '\0'; i++) {
        
        // Counting the words
        if (isalpha(str[i]) && (i == 0 || isspace(str[i -1]))) {
            words++;

            if (isupper(str[i])) {
                uppercase++; 
            }
            else if (islower(str[i])) {
                lowercase++;
            }

        }
    }
    printf("The given string has %d words (%d starts with uppercase, %d starts with lowercase)\n", 
    words, uppercase, lowercase); 
}
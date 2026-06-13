#include "my_ctype.h"

void printInLowercase(const char* str); // We dont need SIZE here because we can always find the end withthe '\0' character
void printInReversedCase(const char* str); // Means: If its lower case, I want to print uppercase..if upper case, print lower case letter

// TODO
void printWithNoDigits(const char* str);
void printSpeacialCharacter(const char* str);
void convertToLower(char* str);
void printWords(const char* str); // More complicated task 

int main(void) {
    char ch_input = 'B';

    printf("IsUpper('%c')= %d\n", ch_input, isUpper(ch_input));
//////////////
// Create a string
char str[]= "HeLlo WoRlD123!"; // So size should be 15 + 1 ---> 16.... this includes the space as a character space

// Print the string
puts("Using printf");
printf("%s\n\n", str);

puts("Using puts");
puts("str");
puts("\n");

puts("using a loop");
for (int i = 0; str[i] != '\0'; i++) { // str[i] != '\0' - continue till the end of the string
    putchar(str[i]); /// different character with every iteration of the loop

}
puts("\n");

puts("Print in lowercase");
for (int i = 0; str[i] != '\0'; i++) {
    putchar(toLower(str[i]));
}
puts("\n");

printInLowercase(str);

return 0;

}

void printInLowercase(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
    putchar(toLower(str[i]));
}
puts("\n");
}

void printInReversedCase(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isUpper(str[i])) {
            putchar(toLower(str[i]));
        }
        else {
            putchar(toUpper(str[i]));
        }

}


/*




*/

#include <stdio.h>

int main(void) {



    return 0;
}

/*

Strings are arrays of characters
char color [] = "blue" ----> {'b','l','u','e','\0'};

Every string for character arrays should have a NULL character somewhere in the array ('\0'); do not actually write "NULL"

****The length of the array and size of the array are two different things****
char str[10]; --> can hold up to 10 characters
str[0] = 'c'; str[1] = 'a'; str[2] = 't'; str[3] = '\0'; ---> but length is 4 characters

Make sure you account for the NULL character --> If the size of the array is 10, you need 10 + 1 extra space for the NULL, 
so the array size should actually be arr[11].

int getchar(void);
char c = getchar; // to return character to int getchar;

*/

#include "my_ctype.h"

int main(void) {
    char ch_input = 'B';

    printf("IsUpper('%c')= %d\n", ch_input, isUpper(ch_input));
//////////////
// Create a string
char str[]= "HeLlo WoRlD123!"; // So size should be 15 + 1 ---> 16.... this includes the space as a character space

// Print the string
puts("Using printf");
printf("%s\n\n", str);

puts("Using puts");
puts("str");
puts("\n");

puts("using a loop");
for (int i = 0; str[i] != '\0'; i++) { // str[i] != '\0' - continue till the end of the string
    putchar(str[i]); /// different character with every iteration of the loop

}
puts("\n");

puts("Print in lowercase");
for (int i = 0; str[i] != '\0'; i++) {
    putchar(toLower(str[i]));
}
puts("\n");

return 0;

}
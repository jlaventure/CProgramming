#include <stdio.h>
#include "my_ctype.h"

void printInLowercase(const char* str); // We dont need SIZE here because we can always find the end withthe '\0' character
void printInReversedCase(const char* str); // Means: If its lower case, I want to print uppercase..if upper case, print lower case letter

// TODO
void printWithNoDigits(const char* str);
void printSpecialCharacter(const char* str);
void convertToLower(char* str);
void printWords(const char* str); // More complicated task 


void get_string(char* str, const char* prompt);
int my_strlen(const char* str);
void my_strcpy(char* dest, const char* src);
void my_strcat(char* dest, const char* src);

int my_strcmp(const char* s1, const char* s2);
 //TODO Compare two strings, comparing lower case and uppercase
//*lowercase would be higher on ASCII code
// return ....0 - strings are the same,
// return .... -1 - first string is smaller
// return ... 1 - first string is larger 

/*
if you have abc and abcd ....abcd is bigger so it would return 1. if its abcd and abcd, it returns 0.
The whole string is bigger if there is once character difference.
*/





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
}

// TODO Hw 1
void printWithNoDigits(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isDigit(str[i])) {
            putchar(str[i]);
        }
    }
    puts("");
}

// TODO Hw 2
void printSpecialCharacter(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isSpecial(str[i])) {
            putchar(str[i]);
        }
    }
    puts("");
}

// TODO Hw 3
void convertToLower(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toLower(str[i]);
    }
}

// TODO Hw 4
/*Essentially: 
Print each word on its own line. Treat letters and digits as part of words.
Treat spaces and special characters as separators.*/
void printWords(const char* str) {// More complicated task
    int insideWord = 0; // Creating new variable and initialized at zero
    /*This creates a variable that tracks whether you are currently inside a word.
    0 = Not currently inside a word;
    1 = Currently inside a word.*/

    for (int i = 0; str[i] != '\0'; i++) { //This loop walks through the string one character at a time 
        /*int i = 0: Start at the first character
        str[i] != '\0': Keep going until the end of the string
        i++: Move to the next character each loop*/
        if (isAlNum(str[i])) {// This line checks "Is the current character a letter or digit?"; True = Letters and/or digits; False = special characters or "space"
            putchar(str[i]);// This line: "If the chracter is a letter or digit, print it."
            insideWord = 1;// This line: "We are currently printing a word"
        }
        else {//If character is not a letter or digit
            if (insideWord) {
                putchar('\n');
                insideWord = 0; // "We are no longer inside a word"
            }
        }
    }

    if (insideWord) {// Handles the case where the string ends while you are still inside a word
        /*"If we ended the string while still inside a word 
        (Example: Just "Hello" with no commas or separators after it...
        which means you are still inside a word, even though it ended), 
        print one final new line."*/
        putchar('\n');
    }
} 


void get_string(char* str, const char* prompt) {
    printf("%s\n", prompt);

    int i = 0;
    while (1) {
        char input = getchar();
        if (input == '\n') {
            break;
        }
        else {
            str[i] = input;
            i++;
        }
    }
    str[i] = '\0'; // Add null character at the end
}

int my_strlen(const char* str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void my_strcpy(char* dest, const char* src) {
    int i = 0;
    while (1) {
        dest[i] = src [i];
        if (src[i] == '\0') {
            break;
        }
        i++;
    }
}

void my_strcat(char* dest, const char* src) {// my_strcat: Add the strings... string 1 + string 2
    int i = my_strlen(dest);
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

}

// TODO Hw 5
int my_strcmp(const char* s1, const char* s2) {
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] < s2[i]) {
            return -1;
        }
        else if (s1[i] > s2[i]) {
            return 1;
        }
        i++;
    }

    // One or both strings ended
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 0;
    }
    else if (s1[i] == '\0') {
        return -1;
    }
    else {
        return 1;
    }
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



    /*char ch_input = 'B';

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


}*/


// TODO 
// check whether the given string is valid

/*
Has at least one upper and lower case
Has at least one digit
Has no spaces or tabs ---> Reminder: Tabs is "\t"
Has {*,$,%,&}
The length is not less than 8
*/

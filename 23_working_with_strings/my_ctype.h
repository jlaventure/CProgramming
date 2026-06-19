/*
Character functions,
*/

#include <stdio.h>
#include <stdbool.h>

/*
Create a function:
Check if the given charcater an uppercase
*/
bool isUpper(char c);
bool isLower(char c);
bool isDigit(char c);
bool isAlNum(char c);

//TODO
bool isSpecial(char c); //Sepcial characters would be like $, %, #, !, etc


char toLower(char c);
char toUpper(char c); // If lower case letter, you convert to upper case; hint: use c - 32;

// Function Defenitions
bool isUpper(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isLower(char c) {
    return c >= 'a' && c <= 'z';
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

bool isAlNum(char c) {
    return isUpper(c) || isLower(c) || isDigit(c);

} //Returns "True": if character is a letter or digit

bool isSpecial(char c) {
    return !isAlNum(c) && c != ' ' && c != '\n';
}

char toLower(char c) {
    if (isUpper(c)) {
        return c + 32; // 32 is referencing the ascii table for lower case letters... I think 
    }
    else {
        return c;
    }
}

char toUpper(char c) {
    if (isLower(c)) {
        return c - 32; // 32 is referencing the ascii table for lower case letters... I think 
    }
    else {
        return c;
    }
}



/* 
32 non printable characters in ASCII table (reason for 32.... so letters - 32 non printable characters).
Uni Code - stores more space/ characters... like emojis etc.
0 means (false)
*/
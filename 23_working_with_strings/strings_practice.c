
#include "my_string.h"

int main(void) {
    char s[100] = "Hello Jack";

 // Get the string
 get_string(s, "Enter the string");

 printf("The string is: \"%s\"\n", s);
 printf("The length is: %d\n", my_strlen(s));

// TODO Function calls from TODO functions in my_string.h
puts("Printing with no digits:");
printWithNoDigits(s);

puts("Printing special characters:");
printSpecialCharacter(s);

puts("Printing words:");
printWords(s);

puts("Converting first string to lowercase:");
convertToLower(s);
printf("The string is: \"%s\"\n", s);
printf("The length is: %d\n", my_strlen(s));

printf("\n");

 // Test copy string
 char s2[100];
 get_string(s2, "Enter the second string");

 // Comparing string 1 and string 2
 printf("Compare result: %d\n", my_strcmp(s, s2));

 puts("Copying the second string into the first one");
 my_strcpy(s, s2);

// Print after copy
 printf("The string is: \"%s\"\n", s);
 printf("The length is: %d\n", my_strlen(s));

 puts("Adding the second string to the first one");
 my_strcat(s, s2);

 // Print after adding
 printf("The string is: \"%s\"\n", s);
 printf("The length is: %d\n", my_strlen(s));

 // TODO my_strcmp Function Call
 

    return 0;
}
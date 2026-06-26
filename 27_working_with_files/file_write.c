#include <stdio.h> // FILE structure
#include <stdlib.h>

int main(void) {
    FILE* file = fopen("output.txt", "w"); // Open the file for writing

    // Check whether the file was opened
    if (file == NULL) {
        puts("File cannot be opened");
        return 1;
    }

    // Three arrays of strings
    char* verbs[10] = {"run", "jump", "write", "read", "sing", "dance", "swim", "think", "build", "create"};
    char* adjectives[10] = {"happy", "bright", "strong", "kind", "brave", "calm", "quick", "smart", "gentle", "creative"};
    char* nouns [10] = {"book", "house", "tree", "car", "river", "computer", "dog", "city", "mountain", "teacher"};

    // Write into a file
    for (int i = 0; i <10; i++) {
        fprintf(file, "%s %s %s\n", adjectives[rand()%10], nouns[rand()%10], verbs[rand()%10]); }
        // Randomly picks a word from the various arrays that I have
    

    // Close the file
    fclose(file);

    return 0;
}
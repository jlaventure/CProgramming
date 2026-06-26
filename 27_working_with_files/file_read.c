#include <stdio.h>

int main(void) {
    FILE* file = fopen("output.txt", "r"); // Open the file for reading

    // Check the opening
    if (file == NULL) {
        puts("File cannot be opened");
        return 1;
    }

    char verb[20], adj[20], noun[20];

    // Read from a file
    while (!feof(file)) {
        fscanf(file, "%s %s %s", adj, noun, verb);
        printf("%s %s %s\n", adj, noun, verb);
    }


    fclose(file);

    return 0;
}
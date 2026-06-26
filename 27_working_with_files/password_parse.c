#include <stdio.h>

int main(void) {
    FILE* file_in = fopen("passwords.txt", "r");

    if (file_in == NULL) {
        puts("File cannot be opened");
        return 1;
    }

    FILE* file_out = fopen("passwords_parsed.txt", "w");

    if (file_in == NULL || file_out == NULL) {
        puts("File cannot be opened");
        return 1;
    }

    char login[40], pass[40];
    while (!feof(file_in)) {
        fscanf(file_in, "%s %s", login, pass);
        fprintf(file_out, "%s %s\n", login, pass);
    }


    fclose(file_in);
    fclose(file_out);
}
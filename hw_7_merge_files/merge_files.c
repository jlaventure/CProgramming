/*
Homework 7 - Merge Files

Essentially:
1. Open the first input file for reading
2. Open the second input file for reading
3. Open the merged output file for writing
4. Copy all lines from file 1 into merged file
5. Copy all lines from file 2 into merged file
6. Close all files
*/

#include <stdio.h>

void mergeFiles(const char *f1, const char *f2, const char *merged); 



int main(void) {
    char file1[100];
    char file2[100];
    char merged[100];

    printf("Enter file name: ");
    scanf("%s %s %s", file1, file2, merged);

    mergeFiles(file1, file2, merged);



    return 0;
}


// Function 1
void mergeFiles(const char *f1, const char *f2, const char *merged) 
{
    FILE *fp1 = fopen(f1, "r");
    FILE *fp2 = fopen(f2, "r");
    FILE *out = fopen(merged, "w");

    char line[200];

    if (fp1 == NULL || fp2 == NULL || out == NULL) {
        printf("Error opening file.\n");

        if (fp1 != NULL) {
            fclose(fp1);
        }

        if (fp2 != NULL) {
            fclose(fp2);
        }

        if (out != NULL) {
            fclose(out);
        }

        return;
    }

    while (fgets(line, sizeof(line), fp1) != NULL) {
        fputs(line, out);
    }

    while (fgets(line, sizeof(line), fp2) != NULL) {
        fputs(line, out);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(out);

}
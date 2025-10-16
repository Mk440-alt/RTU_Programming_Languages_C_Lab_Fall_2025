// week5_task1_file_io.c
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// TODO: Fill in the missing parts marked below.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char filename[100];
    char line[256];
    int lineCount = 0;

    printf("Enter filename (e.g., data.txt): ");
    scanf("%99s", filename);

    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(fp, "This is the first line.\n");
    fprintf(fp, "Here is the second line.\n");
    fprintf(fp, "And this is the third line.\n");
    fclose(fp);
    printf("Data written to file successfully.\n");

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nReading file contents:\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
        lineCount++;
    }
    fclose(fp);

    printf("\nTotal lines read: %d\n", lineCount);
    return 0;
}

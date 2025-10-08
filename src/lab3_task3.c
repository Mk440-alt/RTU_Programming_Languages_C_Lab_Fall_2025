<<<<<<< HEAD
#include <stdio.h>

=======
/*
 * Lab 3, Task 3
 * Student Name, Student ID
 *
 * Implement basic string handling functions.
 * Write your own versions of:
 *   - my_strlen (finds string length)
 *   - my_strcpy (copies string from src to dest)
 *
 * Rules:
 *   - Do not use <string.h> functions for strlen/strcpy.
 *   - Use loops and manual pointer/array access.
 *
 * Example:
 *   char s[] = "hello";
 *   int len = my_strlen(s);   // should return 5
 *
 *   char buffer[100];
 *   my_strcpy(buffer, s);     // buffer now contains "hello"
 */

#include <stdio.h>

// Function prototypes
>>>>>>> upstream/main
int my_strlen(const char *str);
void my_strcpy(char *dest, const char *src);

int main(void) {
<<<<<<< HEAD
=======
    // TODO: Test your functions here
>>>>>>> upstream/main
    char test[] = "Programming in C";
    char copy[100];

    int len = my_strlen(test);
    printf("Length: %d\n", len);

    my_strcpy(copy, test);
    printf("Copy: %s\n", copy);

    return 0;
}

<<<<<<< HEAD
int my_strlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}


=======
// Implement functions below
int my_strlen(const char *str) {
    // TODO: count characters until '\0'
    return 0; // placeholder
}

void my_strcpy(char *dest, const char *src) {
    // TODO: copy characters until '\0'
}
>>>>>>> upstream/main

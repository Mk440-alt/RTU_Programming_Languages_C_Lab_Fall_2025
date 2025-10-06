#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 50

struct Student {
    char name[NAME_LEN];
    int id;
    float grade;
};

int main() {
    int n;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    struct Student *students = malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter data for student %d: ", i + 1);
        if (scanf("%49s %d %f", students[i].name, &students[i].id, &students[i].grade) != 3) {
            printf("Invalid input.\n");
            free(students);
            return 1;
        }
    }

    printf("\nID     Name        Grade\n");
    for (int i = 0; i < n; i++) {
        printf("%-6d %-10s %.1f\n", students[i].id, students[i].name, students[i].grade);
    }

    free(students);
    return 0;
}

/*
 * week4_2_struct_student.c
 * Author: [Magsud Rashidli]
 * Student ID: [230AHC024]
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Students should define a 'Student' struct with fields like name, id, and grade.
 *   Then create a few instances and print them.
 */

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float grade;
};

int main(void) {
    struct Student s;

    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter grade: ");
    scanf("%f", &s.grade);

    printf("\nStudent info:\n");
    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("Grade: %.2f\n", s.grade);

    return 0;
}

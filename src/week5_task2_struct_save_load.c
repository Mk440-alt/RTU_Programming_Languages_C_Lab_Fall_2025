// week5_task2_struct_save_load.c
// Task 2: Save and load structured records from a file
// Week 5 – Files & Modular Programming
// TODO: Complete function implementations and file handling logic.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50

typedef struct {
    char name[MAX_NAME_LEN];
    int age;
    float gpa;
} Student;

void save_student(Student s, const char *filename);
Student load_student(const char *filename);

int main(void) {
    Student s1, s2;
    strcpy(s1.name, "Alice");
    s1.age = 21;
    s1.gpa = 3.75f;

    const char *filename = "student.txt";

    save_student(s1, filename);
    s2 = load_student(filename);

    printf("Loaded student:\n");
    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);
    printf("GPA: %.2f\n", s2.gpa);

    return 0;
}

void save_student(Student s, const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }
    fprintf(fp, "%s\n%d\n%.2f\n", s.name, s.age, s.gpa);
    fclose(fp);
}

Student load_student(const char *filename) {
    Student s;
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }
    fgets(s.name, MAX_NAME_LEN, fp);
    s.name[strcspn(s.name, "\n")] = '\0';
    fscanf(fp, "%d", &s.age);
    fscanf(fp, "%f", &s.gpa);
    fclose(fp);
    return s;
}

//a C program that defines an array of structures
#include <stdio.h>
#include <stdlib.h>

// Define a structure for Student
struct Student {
    char name[50];
    int marks;
};

int main() {
    FILE *fptr;
    struct Student students[5], readStudents[5];
    int i, n = 5;

    // Prompt user to enter details of each student
    printf("Enter information of 5 students:\n");
    for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Write the array of structures to a file
    fptr = fopen("students.bin", "wb");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    fwrite(students, sizeof(struct Student), n, fptr);
    fclose(fptr);
    printf("\nData written to file successfully.\n");

    // Read the array of structures from the file
    fptr = fopen("students.bin", "rb");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    fread(readStudents, sizeof(struct Student), n, fptr);
    fclose(fptr);

    // Display the read data on the screen
    printf("\nDisplaying information of students:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: Name = %s, Marks = %d\n", i + 1, readStudents[i].name, readStudents[i].marks);
    }

    return 0;
}


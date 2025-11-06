/*
Name:Annie Mumbi Kamau 
Reg no:pa106/G/29214/25
description : C file program that  stores student examination results
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Defines a structure to hold the student information.
struct Student {
    char name[50];
    char reg_number[20];
    int total_marks;
};

// Function to write sample data to the binary file
void write_records() {
    // Array of sample student data
    struct Student students[] = {
        {"Alice Johnson", "REG001", 85},
        {"Bob Smith", "REG002", 92},
        {"Charlie Brown", "REG003", 78}
    };
    int num_students = sizeof(students) / sizeof(students[0]);

    // Open the file in binary write mode ("wb")
    FILE *file_ptr = fopen("results.dat", "wb");

    if (file_ptr == NULL) {
        perror("Error opening file for writing");
        return;
    }

    printf("--- Writing Records to results.dat ---\n");
    
    // Write the entire array of structures to the file
    size_t written_count = fwrite(students, sizeof(struct Student), num_students, file_ptr);
    
    if (written_count == num_students) {
        printf("%d student records written successfully.\n", num_students);
    } else {
        fprintf(stderr, "Error: Could not write all records.\n");
    }

    // Close the file
    fclose(file_ptr);
    printf("File 'results.dat' closed.\n\n");
}

// Function to read and display data from the binary file
void read_and_display_records() {
    struct Student current_student;
    
    // Open the file in binary read mode ("rb")
    FILE *file_ptr = fopen("results.dat", "rb");

    if (file_ptr == NULL) {
        perror("Error opening file for reading");
        return;
    }

    printf("--- Reading Records from results.dat ---\n");
    printf("%-20s %-15s\n", "STUDENT NAME", "TOTAL MARKS");
    printf("---------\n");

    // 2. Reads all student records from the binary file.
    while (fread(&current_student, sizeof(struct Student), 1, file_ptr) == 1) {
        // 3. Displays the name and marks of each student on the screen.
        printf("%-20s %-15d\n", 
               current_student.name, 
               current_student.total_marks);
    }

    // Check if the loop terminated because of end-of-file (feof) or an error (ferror)
    if (feof(file_ptr)) {
        printf("\nEnd of file reached. All records processed.\n");
    } else if (ferror(file_ptr)) {
        perror("Error reading file");
    }

    // Close the file
    fclose(file_ptr);
}

int main() {
    // Step 1: Write initial data to the file
    write_records(); 

    // Step 2: Read the data back and display it
    read_and_display_records();

    return 0;
}

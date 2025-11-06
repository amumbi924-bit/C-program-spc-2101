/*
Name : Annie Mumbi Kamau 
Reg no:pa106/G/29214/25
description :C files to store borrowed textbook 
*/

#include <stdio.h>
#include <stdlib.h> 

int main() {
    FILE *filePointer;
    char bookTitle[100]; 

    // Step 1: Open the file in append mode ("a")
    
    filePointer = fopen("borrowed_books.txt", "a");

    // Check if the file opened successfully
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        // Use perror to print a system error message
        perror("borrowed_books.txt");
        return 1; // Return an error code
    }

    // Step 2: Get the new book title from the user
    printf("Enter the title of the borrowed book: ");
    // Use fgets to safely read a line of input, including spaces
    if (fgets(bookTitle, sizeof(bookTitle), stdin) == NULL) {
        printf("Error reading input.\n");
        fclose(filePointer);
        return 1;
    }

    // Step 3: Write the title to the file
    
    fprintf(filePointer, "%s", bookTitle);
    // Step 4: Ensure the file is properly closed
    fclose(filePointer);

    // Step 5: Display a confirmation message
    printf("\nSuccess! The title has been successfully stored in borrowed_books.txt.\n");
    printf("NOTE: The new title was appended to the existing records.\n");

    return 0;
}

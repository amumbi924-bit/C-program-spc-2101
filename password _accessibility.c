/*
Name;Annie Mumbi kamau
Reg no;pa106/G/29214/25
description:do while program to check password accessibility 
*/

    #include <stdio.h>

    int main() {
    int password;
    const int correctPassword = 1234;
    
    do {
    printf("Enter password: ");
    scanf("%d", &password);
        
    if (password != correctPassword) {
    printf("Incorrect password. Please try again.\n");
    }
    } while (password != correctPassword);
    
    printf("Access Granted\n");
    
    return 0;
    }
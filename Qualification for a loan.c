/*
Name:Annie Mumbi Kamau
Reg no:pa106/G/29214/25
Description:program to compute qualification for a loan
 */   
#include <stdio.h>

int main() {
    int age;
    float income;

    // prompt the user to enter age
    printf("Enter the age: ");
    scanf("%d", &age);

    // prompt the user to enter income
    printf("Enter the income: ");
    scanf("%f", &income);

    // check eligibility
    if (age >= 25 && income >= 30000) {
    printf("Congratulations, you qualify for a loan!\n");
    } else {
    printf("Unfortunately, you do not qualify.\n");
    }

    return 0;

    }
   

    

    
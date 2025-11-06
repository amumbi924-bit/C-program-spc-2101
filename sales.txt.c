/*
Name: Annie Mumbi Kamau
Reg no: pa106/G/29214/25
description :c files that stores sales transactions
*/
#include <stdio.h>

int main() {
    FILE *fp;
    double transaction_amount;
    double total_sales = 0.0
    
    fp = fopen("sales.txt", "r")
    if (fp == NULL) {
        printf(" Error: Could not open the file 'sales.txt'.\n");
        printf("Make sure the file exists in the same directory as the program.\n");
        return 1; /
    }

    // 3. Read and sum all transactions
    printf("Processing sales transactions...\n")
    while (fscanf(fp, "%lf", &transaction_amount) == 1) {
        total_sales += transaction_amount
        
    }

    // 4. Close the file
    fclose(fp);

    // 5. Display the total sales
    printf("\nCalculation Complete ---\n");
    printf("The total sales for the day is: $%.2lf\n", total_sales);

    return 0;
}
    
/* Name:Annie Mumbi Kamau 
Reg no: pa106/G/29214/25
description:1D array to compute revenue 
*/
#include <stdio.h>

int main () {
    float revenue[7];
    float total_revenue = 0;
    float average; 

    //  for start:stop:step 
    printf("enter revenue for each day\n"); 
    for (int i = 0; i < 7; i++) {
    scanf("%f", &revenue[i]); 
    }
    //calculations
    for (int i = 0; i < 7; i++) {
    total_revenue += revenue[i];
    }

    average = total_revenue / 7;

   //display
    printf("Total Revenue: %.2f\n", total_revenue);
    printf("Average Revenue: %.2f\n", average);

    return 0;
    }

/*
Name:Annie Mumbi Kamau 
Reg:pa106/G/29214/25
Description :program to check exam eligibility 
*/
    # include<stdio.h>
    int main() {

    float marks,attendance; 
    //prompt the user 
    printf("enter marks    "); 
    scanf("%f",&marks);
    
    //prompt the user 
   printf("enter attendance    "); 
   scanf("%f",&attendance);
    
    //check eligibility 
    if(marks >=40 &&attendance >=75)
    {
    printf("exam eligible ");
    }
    else
    {
    printf("Not eligible ");
    }
    return 0;
    }
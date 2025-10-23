/*
Name: Annie Mumbi Kamau 
Reg no:PA106/G/29214/25
function to multiply fare
*/
#include <stdio.h>
//function prototype 
int multiplication(int rate, int distance);

void main (){
    int result;
    //function call
    result =multiplication (50 , 10);
    
    printf("the fare is %d\n",result);


    }

    //function declaration ,template
    int multiplication(int rate, int distance) {
    
    int fare;
    fare = rate * distance; 
    return fare;
    }
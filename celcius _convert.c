/*
Name: Annie Mumbi kamau
Reg no:PA106/G/29214/25
function to convert temperature in fanhrenheit to Celsius 
*/
#include <stdio.h>
//function prototype 
 float multiplication(float temperature);

void main(){
    float result ;
    // function call
    result= multiplication (108.0);
    
    
    printf("the Celsius is %f°\n", result); 
    
    }
    
    //function declaration, template 
    float multiplication(float temperature){
    float Celsius;
    
    Celsius = (temperature-32.0)*(5.0/9.0);
    return Celsius;
    }
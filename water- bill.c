/*
Name:Annie Mumbi Kamau 
Reg no:pa106/G/29214/25
Description:program  compute water bill
*/
    #include<stdio.h>
     
     int main(){
     int units ;
     float bill;
     
     //prompt the user to enter number of  units consumed 
       printf("enter the number of water units consumed");
       scanf ("%d",&units);
       
       
       //computing the water bill 
       if(units <=30) { bill=units *20;}
       
       else if(units<=60) {bill=units*25;}
       else if(units>=60) {bill=units *30;} 
       
       //total bill
       printf("total bill =units *amount in ksh,%2d");
       
       return 0;
       }
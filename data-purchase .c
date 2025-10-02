/*
Name:Annie Mumbi Kamau 
Reg:pa106/G/29214/25
Description :program to purchase bundle  
*/

# include<stdio.h>
int main() {
int option ;
     
    //display menu 
    printf("1.100mb @50\n");
    printf("2.500mb @200\n");
    printf("3.1GB @350\n");
    printf("4.2GB @600\n");
    
    //prompt user
    printf("enter a option (1-4)");
    scanf("%d",option);
    
    //switch statement 
    switch (option) {
    case 1:
    printf("you selected 100mb @50");
    break;
    case 2:
    printf("you selected 500mb @200");
    break;
    case 3:
    printf("you selected 1GB @350");
    break;
    case 4:
    printf("you selected 2GB @600");
    break;
    default: printf("enter between (1-4)");
    }
    
    return 0;
    
    }
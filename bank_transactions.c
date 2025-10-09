 /*
 Name:Annie Mumbi kamau
 Reg no:pa106/G/29214/25
 description:while loop program to display bank balance 
 */   
    
    #include <stdio.h>

    int main() {
    float balance;
    
    printf("Enter initial balance: ");
    scanf("%f", &balance);
    
   while (balance > 0) {
   float withdraw;
    printf("Enter amount to withdraw: ");
    scanf("%f", &withdraw);
        
    balance = balance - withdraw;
        
    printf("Current balance: %.2f\n", balance);
    }
    
    return 0;
    }
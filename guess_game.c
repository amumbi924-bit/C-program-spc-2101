/*
Name:Annie Mumbi Kamau 
Reg no:pa106/G/29214/25
description:while program implementing number guessing game
*/

    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>

    int main() {
    int secretNumber, guess, attempts = 0;
    
    srand(time(NULL));
    secretNumber = (rand() % 20) + 1;
    
    while (1) {
    printf("Enter your guess: ");
    scanf("%d", &guess);
        
    attempts++;
        
    if (guess == secretNumber) {
    printf("Congratulations!\n");
    break;
    }
    else if (guess > secretNumber) {
    printf("Too high!\n");
    }
    else {
    printf("Too low!\n");
    }
    }
    
    printf("It took you %d attempts to guess correctly.\n", attempts);
    
    return 0;
}
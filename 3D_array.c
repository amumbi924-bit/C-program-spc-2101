/*
Name:Annie Mumbi Kamau 
Reg no:pa106/G/29214/25
Description:3D array to display  a chain for occupancy 
*/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    int chain[3][5][10];
    int total_occupied_rooms = 0;
    int i, j, k;

    
    srand(time(NULL)); 
    //for start;step;stop
    
    for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
    for (k = 0; k < 10; k++) {
   
   chain[i][j][k] = rand() % 2;
            }
        }
    }

    
    for (i = 0; i < 3; i++) {
   for (j = 0; j < 5; j++) {
    for (k = 0; k < 10; k++) {
   
   if (chain[i][j][k] == 1) { 
   total_occupied_rooms++;
                }
            }
        }
    }

    
    printf("Total no of occupied rooms: %d\n", total_occupied_rooms);

    return 0;
}

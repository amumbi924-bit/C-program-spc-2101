/*
Name: Annie Mumbi Kamau 
Reg no:pa106/G/29214/25
description:2D array to calculate occupancy 
*/
#include <stdio.h>
#include <stdlib.h> 

int main () {
    // declaration and initialization
    int floor; // 
    int occupied_rooms = 0;
    int vacant_rooms = 0;   
    int i, j;
    
    int occupancy[5][10]; 

    // for start;stop;step
    for (i=0; i<5; i++) { 
    for (j=0; j<10; j++) {
     occupancy[i][j] = rand() % 2; 
    }
    }

    // Calculates occupied rooms per floor
    for (i=0; i<5; i++) { 
    int occupied_per_floor = 0; 
    for (j=0; j<10; j++) { 
    if (occupancy[i][j]) {
    occupied_per_floor ++;
    }
    }
        
   // Output for the current floor
   printf("Floor %d: Occupied Rooms %d, Vacant Rooms %d\n", 
   i+1,
   occupied_per_floor, 
   10 - occupied_per_floor);
               
        
   occupied_rooms += occupied_per_floor;
    }
    
    // Print total data after the loop is done
    vacant_rooms = (5 * 10) - occupied_rooms; 
    printf("\nTotal Occupied Rooms: %d\n", occupied_rooms);
    printf("Total Vacant Rooms: %d\n", vacant_rooms);

    return 0;
    }
    
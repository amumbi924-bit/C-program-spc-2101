/*
Name:Annie Mumbi kamau
Reg no:pa106/G/29214/25
Description:program to compute the volume of a cylinder
volume=pie*radius squared*height
*/

 #include<stdio.h>
 
 int main () {
 
    //variable declaration 
    float pie,radius,height;
                                     
    // prompt the user to enter the radius
    printf("/n enter radius :");
    scanf("%f ,&radius");
 
    //prompt the user to enter the height
    printf("/n enter the height:");
    scanf("%f,& height");

    //compute the volume 
    printf("volume of a cylinder=pie*radius*radius*height");
    //display volume 
    ("volume of a cylinder,%2f/n");
    
    return 0;
    }
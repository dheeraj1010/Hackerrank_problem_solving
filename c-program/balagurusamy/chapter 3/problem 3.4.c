/*  Write a program that will obtain the length and width of a rectangle from the user 
and compute its area and perimeter */
#include<stdio.h>
#include<conio.h>

void main()
{
	float length,breadth,area;
	printf(" Write a program that will obtain the length and width of a rectangle from the user and compute its area and perimeter \n\n");
	printf("enter the length of rectangle = ");
    scanf("%f",&length);
    printf(" enter the breadth of the rectangle = ");
    scanf("%f",&breadth);
    
    area=length*breadth;
    printf("\n\nArea of the rectangle is %.2f",area);
    getch ();
    
	
}

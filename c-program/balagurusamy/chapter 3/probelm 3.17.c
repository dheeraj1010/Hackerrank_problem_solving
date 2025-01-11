/* Write a program to print of sin and cos functions for the interval from 0 to 180 
degrees in increments of 15 a shown here */
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
void main()
{
	int angle;
	float x;
	
	printf("x(degrees)                     sin(x)                              cos(x)\n");
	for(angle=0;angle<=180;angle+=15)
	{
		x=(PI*angle)/180;
		float sine=sin(x);
		float cosine=cos(x);
    printf("  %d                        %.3f                                   %.3f      \n",angle,sine,cosine);
	}
	getch ();
	
}

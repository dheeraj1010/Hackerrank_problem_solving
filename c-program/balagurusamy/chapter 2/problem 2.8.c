/* Write  a program to read two floating point numbers using a scanf statement ,assign their sum to an integer variable and then ouput 
the values of all the three variables*/
#include<stdio.h>
#include<conio.h>
int main()
{
	
	float x,y;
	int sum;
	
	printf("enter any floating point number = ");
	scanf("%f",&x);
	printf("enter any floating point number =\n");
	scanf("%f",&y);
	sum=x+y;
	printf("\n\n    %f+%f=%d",x,y,sum);
	getch ();
	return 0;
}

/* Write  a program that reads a floating -point number and then displays the right -most 
digit of this integral part of the number */
#include<stdio.h>
#include<conio.h>
void main()
{
	float a;
	printf(" Write  a program that reads a floating -point number and then displays the right -most digit of this integral part of the number\n\n");
	
	printf("enter any floating point number =");
	scanf("%f",&a);
	int b,last_digit;
	b=a;
	last_digit=b%10;
	printf("\n\nthe last digit of the number you have entered is %d ",last_digit);
	getch ();

	
}

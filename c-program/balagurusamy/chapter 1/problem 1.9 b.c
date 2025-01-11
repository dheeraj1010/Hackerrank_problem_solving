//conversion from celcius to farenheight
#include<stdio.h>
#include<conio.h>
int main()
{
	float f,c;
	printf("to convert from farenhiet to celcius\n\n");
	
	printf("enter value of temp in farenhiet =");
	scanf("%f",&f);
	c=(f-32)*(5.0/9);
	printf(" temp in farenhiet = %.2f",c);
	getch ();
	return 0;
}

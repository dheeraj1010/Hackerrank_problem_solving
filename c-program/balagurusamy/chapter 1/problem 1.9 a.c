//conversion from celcius to farenheight
#include<stdio.h>
#include<conio.h>
int main()
{
	float f,c;
	printf("to convewrt from celcius to farenhiet\n\n");
	
	printf("enter value of temp in celcius =");
	scanf("%f",&c);
	f=9*c/5+32;
	printf(" temp in farenhiet = %.2f",f);
	getch ();
	return 0;
}

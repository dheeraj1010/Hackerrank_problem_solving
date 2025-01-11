//calculate compound intrest
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int princ,year;
	float rate,intrest,amount;
	
	printf("enter priciple amount =");
	scanf("%d",&princ);
	printf("enter year =");
	scanf("%d",&year);
	printf("enter intrest rate=");
	scanf("%f",&rate);
	
	amount=princ*(pow((1+rate/100),year));
	
	intrest=amount-princ;
	
	printf("\nintrest =%.2f",intrest);
	
	getch ();
	
	
}

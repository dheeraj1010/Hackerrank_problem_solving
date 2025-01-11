#include<stdio.h>
#include<conio.h>
void main()
{
	int prin,year,rate,intr;
	
	printf("enter princple amount =");
	scanf("%d",&prin);
	printf("enter no of year=");
	scanf("%d",&year);
	printf("enter rate=");
	scanf("%d",&rate);
	
	intr=(prin*year*rate)/100;
	
	printf("\nintrest =%d",intr);
	getch ();
	
	
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int depreciation ,purchase,year;
	float salvage;
	printf("enter the purchase price of an item = ");
	scanf("%d",&purchase);
	printf("enter the  yearly depreciation price  of the item =");
	scanf("%d",&depreciation);
	printf("enter the year of service =");
	scanf("%d",&year);
	
	salvage=(float)purchase-(float)year*depreciation;
	printf(" salvage price of the item = %.2f",salvage);
	getch ();
		
	
}

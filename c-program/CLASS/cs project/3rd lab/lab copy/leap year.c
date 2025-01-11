#include<stdio.h>
#include<conio.h>
int main()
{
	int y;
	printf("NAME-DHEERAJ KUMAR\nROLL NO-1704038\n");
	printf("\n\nenter year  = ");
	scanf("%d",&y);
	
	if(y%400==0)
	printf("\n%d is leap year",y);
	else if(y%100==0)
	printf("\n%d is not a leap year",y);
	else if(y%4==0)
	printf("\n%d is leap year",y);
	else 
	printf("\n %d is not a leap year",y);
	 
	 getch ();
	 return 0;
	 	
}

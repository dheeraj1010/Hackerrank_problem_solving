/*Any year is entered through the keyboard , write a program to determine weather the year is 
leap or not .Use the logical operators && and||*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int y;
printf("to check weather a year is leap or not\n");

printf("\nplease enter any year to check year is leap or not ==");
scanf("%d",&y);

if(y%400==0)
printf("\nyear %d is leap year",y);
else if(y%100==0)
printf("\n year %d is not a leap year",y);

else if(y%4==0)

printf("\nyear %d is a leap year ",y);
printf("\nyear %d is not a leap year ",y);
getch ();
return 0;	
}


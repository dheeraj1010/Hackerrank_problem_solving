/* c. any year input through the keyboard . write a program todetermine weather the year is a leap yaer or not */

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()

{
	
	printf(" to check entered number is leap  year or not ");
	int year;
printf("\n enter eny year of your choice =");
scanf("%d",&year);

if((year%4)==0)
{
printf("\n\nyear entered by you is not a leap year");
}

else
printf("\n\nyear entered by you is a leap year");
 
 return 0;


}

/*************************************************************************************************
Write a program to add first seven terms of the following series
using a for loop==1/1 +2/2+ 3/3*2 +...... up to 7 terms*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int a,af;
	float sum=0;
	for(a=1;a<=7;a++)
	{
		af=af*a;
		sum=sum+(a/(float)af);
		
	}
	
	
	printf("sum of series =%.3f" ,sum);
	getch ();
	return 0;
}
	


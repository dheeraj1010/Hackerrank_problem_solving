/* According to a study , the approximate level of intelligence of a person can be
calculated using the folloowing formula;
i=2+(y+0.5x)
Write a program that will produce a table  of values of i ,y and x where y varies from 1 to 6 , and 
for each value of y, x varies from 5.5 to 12.5 in steps of 0.5.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int y;
	float x,i;
	
	printf("table of intelligence \n\n");
	
	for(y=1;y<=6;y++)
	{
		for(x=5.5;x<=12.5;x+=0.5)
		{
			i=2+(y+0.5*x);
			printf(" %.2f = 2 + (%d + 0.5 * %.1f )\n",i,y,x);
			
		}
	}
	getch ();
	return 0;
}

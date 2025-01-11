/* population of a town today is 100000. thye population has increased steadily at the rate of
10% per year for last 10 yhears . Write  a program to dtermine thge population at the end of each year in the last decade */
#include<stdio.h>
#include<conio.h>
int main()
{
	int pop=100000,rate,y;
	printf("rate of population of town \n\n");
	for(y=1;y<=10;y++)
	{
		pop=pop+pop*0.1;
		printf(" population at the end of %d year is %d\n",y,pop);
		
	}
	getch ();
	return 0;
	}

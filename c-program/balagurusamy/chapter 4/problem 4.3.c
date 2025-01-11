/* Write a program to read the following numbers , round them off to the nearest integer and print 
out the results in integer form :*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>

void main()
{
	float n,decimal;
	int i=1,y;
	while(i<5)
	{
		printf("enter a number =");
		scanf("%f",&n);
		
		if(n>0){
		
	decimal=n-floor(n);
		if(decimal<0.5)
		 y=floor(n);
		else 
		y=ceil(n);
		}
		else
		{
			decimal=n-(floor(n));
		if(decimal<0.5)
		 y=floor(n);
		else 
		y=ceil(n);
		
		}
		printf("nearest intger = %d\n",y);	
		}
		getch();
}

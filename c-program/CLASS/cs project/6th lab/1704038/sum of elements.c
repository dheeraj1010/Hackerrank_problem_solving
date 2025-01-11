#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],sum,i;
	printf("Name-Dheeraj kumar\nRoll no-1704038\n");
	
	for(i=0;i<5;i++)
	{
		printf("enter a number =");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
		
	}
	printf("\nsum of all elements of array =%d",sum);
	getch ();
	
}

#include<stdio.h>
#include<conio.h>

#define A 3
#define B 3
int main()
{
	int a[A][B];
	
	int i,j;
	
	for(i=0;i<A;i++)
	{
		printf("enter first row element \n");
		for(j=0;j<B;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
		printf("\n");
		
	}
	
	int x;
	
	for(i=0;i<A;i++)
	{
	
		for(j=0;j<B;j++)
		{
		if(a[i][j]<a[i][j+1])	
		{
			x=a[i][j];
			a[i][j]=a[i][j+1];
			a[i][j+1]=x;
		}
		}
	}
	
	for(i=0;i<A;i++)
	{
		for(j=0;j<B;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
	
	
}

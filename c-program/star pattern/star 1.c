#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n;
	printf("enter a number L:");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(j<=i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	

}

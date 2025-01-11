//WAP to print diamond pattern.
#include<stdio.h>

void main()
{
	int i,j,n;
	
	printf("enter a number  number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<(n-1)-i)
			printf(" ");
			
			if(j<=i+2&&j>=(n-1)-i)
			printf("*");
			
			if(j<=(i-3))
			printf(" ");
			
			
		}
		printf("\n");
	}
	
	
	
}

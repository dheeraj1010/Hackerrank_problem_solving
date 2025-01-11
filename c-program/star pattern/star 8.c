#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k=1,n;
	printf("enter a number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=n+1-i&&j<=n-1+i)
			{
			
			printf("%d",k);
			j<n?k++:k--;
		}
		else
		printf(" ");
		}
		printf("\n");
	}
}

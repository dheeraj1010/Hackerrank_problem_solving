#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("enter n = ");
	scanf("%d",&n);
	
	int i,j;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(2*n-1);j++)
		{
		 if(j<=n-i)
		 printf("*");
		 
		 if(j>n-i&&j<=n)
		 printf("%d",((n+4)-(i+j)));
		 
		 if(j>n&&j<n+i)
		 printf("%d",j-i);
		}
		printf("\n");
		
	}
	
	return 0;
}


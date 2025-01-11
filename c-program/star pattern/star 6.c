#include<conio.h>
#include<stdio.h>

void main()
{
	int n,i,j,k=1;
	printf("enter a number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=1;j<=2*n-1;j++)
		{
			if(j>n+1-i&&j<=n-1+i&&k==1)
			{
			
			printf("*");
			k=0;
		
	        }
	        
	        else
	        {
			
	        printf(" ");
	        k=1;
	    }
		}
		printf("\n");
	}
}

#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k,n;
	
	printf("enter number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		i<(n-3)?k++:k--;
		for(j=1;j<=n;j++)
		{
			if(j>=n-2-k&&j<=n-4+k)
			{
				printf("*");
			}
			else
			printf(" ");
			
		}
		printf("\n");
	}
}

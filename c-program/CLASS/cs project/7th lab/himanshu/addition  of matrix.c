#include<stdio.h>
#include<conio.h>
void main()
{
	printf("Name-Himanshu chaudhary\nRoll no-1704004\n");
	int i,j,a[20][20],b[20][20],n,sum[20][20];
	
	printf("enter order of matrix=");
	scanf("%d",&n);
	
	printf("\nenter matrix a\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nenter matrix b\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nsum of matrices\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d",sum[i][j]);
		}
		printf("\n");
	}
	getch ();
}

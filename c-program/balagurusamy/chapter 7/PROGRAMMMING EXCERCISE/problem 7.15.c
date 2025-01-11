#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int r,c,i,j;
	printf("enter row and column  of matrices  =");
	scanf("%d %d",&r,&c);
	
	int A[r+1][c+1],B[r+1][c+1],sum[r+1][c+1],sub[r+1][c+1];
	printf("enter elements of matrix A :\n");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
		scanf("%d",&A[i][j]);
	}

	}
	
	printf("enter elements of matrix B :");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&B[i][j]);
		}

	}
	printf("\n");
	
	printf("sum of A and B:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d",A[i][j]+B[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("subtraction  of A and B :\n");
	for(i=1;i<r;i++)
	{
		for(j=1;j<c;j++)
		{
			printf(" %d",A[i][j]-B[i][j]);
		}
		printf("\n");
	}
	return 0;
	getch ();
}

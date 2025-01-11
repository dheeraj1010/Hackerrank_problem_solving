#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int m,n;
	printf("enter row and column of matrix =");
	scanf("%d%d",&m,&n);
	int A[m+1][n+1],tran[m+1][n+1];
	printf("\nenter elements of matrix :\n");
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
			tran[j][i]=A[i][j];
		}
	}
	printf("\n");
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	{
		printf(" %d",tran[i][j]);
	}
	printf("\n");
	}
	getch ();
	
}

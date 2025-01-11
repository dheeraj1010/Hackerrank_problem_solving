#include<stdio.h>
#include<conio.h>
void main()
{
	//order declartion of matrix
	int order_a,order_b;
	printf("enter order of matrix  A =");
	scanf("%d",&order_a);
	printf("enter order of matrix B =");
	scanf("%d",&order_b);
	
	int A[order_a+1],B[order_b+1];
	
	//element add in a;
	int i;
	for(i=0;i<order_a;i++)
	{
	printf("enter %d th element of matrix A =",i+1);
	scanf("%d",&A[i]);

	}
	
	//elemt add in matrix b
	for(i=0;i<order_b;i++)
	{
		printf("enter %d th element of B =",i+1);
		scanf("%d",&B[i]);
	}
	
	//sort a mtrix a in ascending order
	int j,t;
	for(i=0;i<order_b;i++)
	{
		for(j=0;j-i<order_b;j++)
		{
			if(A[j]>B[j+1])
			{
				t=A[j];
				A[j]=A[j+1];
			    A[j+1]=t;
			}
		}
	}
	
	//sort matrix B in ascending order
	
		for(i=0;i<order_b;i++)
	{
		for(j=0;j-i<order_b;j++)
		{
			if(B[j]>B[j+1])
			{
				t=B[j];
				B[j]=B[j+1];
			    B[j+1]=t;
			}
		}
	}
	
	//add both mstrix in one matrix;
	
	
}

//WAP to calculate the sum of numbers from m to n.
#include<stdio.h>
#include<conio.h>

void main()
{
	printf("WAP to calculate the sum of numbers from m to n\n\n\n");
	int n,m,s=0,copy;
	printf("enter n and m \n:");
	scanf("%d%d",&n,&m);
	copy=n;
	while(n<=m)
	{
		s=s+n;
		n++;
	}
	printf("\n sum of numbers from %d to %d = %d",copy,m,s);
	
	
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	printf("to sum of n natural number\n enter value of n=");
	scanf("%d",&n);
	
	for(i=1;i<=n; i++)
	{
		sum=sum+i;
	}
	printf("\nsum of %d natural number is %d ",n,sum);
	
	getch ();
}

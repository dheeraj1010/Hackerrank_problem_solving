#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("NAME-DHEERAJ KUMAR\nROLL NO-1704038");
	printf("\n\nenter value of n =");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=i+sum;
		
	}
	printf("sum of %d natural number = %d",n,sum);
	getch ();
	return 0;
}

#include<stdio.h>
#include<conio.h>
void main()
{
	// to find all factor of a number
	
	int n,i;
	printf("enter a number =");
	scanf("%d",&n);
	
	printf("factorail of %d =",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("  %d",i);
	}
	getch ();
}

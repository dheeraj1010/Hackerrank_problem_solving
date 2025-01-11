#include<stdio.h>
#include<conio.h>
void main()
{
	// to find fatorial of any number
	int n,fac=1,i;
	
	printf("to find factorial of n\nenter n=");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		fac=n*i;
	}
	printf("factorial  of %d is %d",n,fac);
	
	getch ();
	
}

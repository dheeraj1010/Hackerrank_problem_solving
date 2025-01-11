// calculatefactorial of a number
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,i,fac=1;
	printf("to calculate factorial of any number \n");
	printf("enter a number =");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
		
	}
	printf("factorial of %d is %d",n,fac);
	getch ();
	}

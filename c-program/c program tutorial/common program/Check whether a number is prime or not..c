//Check whether a number is prime or not.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i=2,k=0;
	printf("enter a number :");
	scanf("%d",&n);
	
	while(i<n)
	{
		if(n==2)
		{
			k=0;
			break;
		}
		
		if(n%i==0)
		{
			k=1;
			break;
		}
		i++;
	}
	if(k==0)
	printf("\n%d is a prime number ",n);
	
	else 
	printf("\n%d is not a prime number ",n);
}

// check prime number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,k=0;
	printf("enter a number =");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
{
	if(n%i==0)
	{
		printf("%d is not a prime number ",n);
		break;
	}
		k=1;
	}
	
	if(k==1)
	printf("%d is a prime number ",n);
	
	getch ();
	}	


#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,x=0;
	printf("Name-Dheeraj kumar\nRoll no-1704038\n\n");
	printf("enter any number = ");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("%d is not a prime number ",n);
			x=1;
			break;
		}
		
		
	}
	if(x==0)
	{printf("\n%d is prime number ",n);
	}
	getch ();
	return 0;
}

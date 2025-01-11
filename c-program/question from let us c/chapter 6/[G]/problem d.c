#include<stdio.h>
#include<conio.h>
#include<math.h>
int prime(int,int);

void main()
{
	int n,i,factor;
	printf("enter a integer =");
	scanf("%d",&n);
	printf("factor of %d :\n",n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			
			if(prime(i,i/2)==1)
			{
			
			factor=i;
			printf(" %d",factor);
		   }
			
		}
	}
	
	getch ();
	
}

int prime(int n,int i)
{
	if(i==1)
	return 1;
	else if(n%i==0)
	return 0;
	else 
	return prime(n,i-1);
}



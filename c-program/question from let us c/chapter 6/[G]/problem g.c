#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
	int s=sum(25);
	printf("\n sum of first 25 number = %d",s);
	
	
	getch ();
	}
	
	int sum(int n)
	{
		if(n==0)
		return 0;
		
		return n+sum(n-1);
	}

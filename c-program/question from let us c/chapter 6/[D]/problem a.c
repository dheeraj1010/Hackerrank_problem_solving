#include<stdio.h>
#include<conio.h>
int factorial(int );
void main()
{
	int n;
	printf("enter a integer =");
	scanf("%d",&n);
	
	printf("factorail of %d = %d",n,factorial(n));
	
	getch ();
	
}

int factorial(int n)
{
 if(n==0)
 return 1;
 else
 return n*factorial(n-1);
 
}



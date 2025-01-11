#include<stdio.h>
#include<conio.h>
int prime(int ,int);
void main()
{
	int n,c;
		printf("Name-Dheeraj kumar\nRoll no-1704038\n");
	printf("enter a number =");
	scanf("%d",&n);
	c=prime(n,n/2);
	if(c==1)
	printf("%d is prime number",n);
	else
	printf("%d is not a prime number",n);
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

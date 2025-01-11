#include<stdio.h>
#include<conio.h>

int fib(int );

void main()
{
	int i,f;
	printf("fibonacci series :\n");
	for(i=1;i<26;i++)
	{
		f=fib(i);
		printf(" %d\n",f);
		
	}
	
}

int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	return (fib(n-1)+fib(n-2));

}

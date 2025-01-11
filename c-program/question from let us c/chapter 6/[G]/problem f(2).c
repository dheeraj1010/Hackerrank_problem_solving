#include<stdio.h>
#include<conio.h>
int rec(int,int);

void main()
{
	int n,bin,base=1;
	printf("enter a number =");
	scanf(" %d",&n);
	bin=rec(n,base);
	printf("\nbinary of %d is %d ",n,bin);
	
	getch ();
}

int rec(int n,int base)
{
	if(n==1)
	return base;
	return ((n%2)*base+rec(n/2,base*10));
	
}




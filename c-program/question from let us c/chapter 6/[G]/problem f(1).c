#include<stdio.h>
#include<conio.h>
int binary(int );

void main()
{
	int n,bin;
	printf("enter a number =");
	scanf("%d",&n);
	bin=binary(n);
	printf("\nbinary of %d = %d",n,bin);
	
	getch ();
	
}

int binary(int n)
{
	int base=1,bin=0,rem;
while(n>0)
{
	rem=n%2;
	bin=bin+rem*base;
	base*=10;
	n/=2;
}

return bin;
}




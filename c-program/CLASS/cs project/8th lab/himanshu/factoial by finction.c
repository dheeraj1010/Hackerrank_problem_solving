#include<stdio.h>
#include<conio.h>
int fac(int);

void main()
{
	int n,f;
	printf("Name-Himanshu chaudhary\nRoll no-1704004\n");
	printf("enter a number =");
	scanf("%d",&n);
	f=fac(n);
	printf("\nfactorial of %d = %d ",n,f);
	getch ();
}

int fac(int n)
{
 if(n==0)
 return 1;
 return fac(n-1)*n;
}

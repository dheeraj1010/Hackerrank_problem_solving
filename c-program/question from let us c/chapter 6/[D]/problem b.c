#include<stdio.h>
#include<conio.h>
int power(int, int );

void main()
{
	int a,b;
	printf("enter a and b :");
	scanf("%d%d",&a,&b);
	
	int p=power(a,b);
	printf(" \n%d^%d = %d",a,b,p);
	
	getch ();
}

int power(int a,int b)
{
if(b==0)
return 1;
	
	return a*power(a,b-1);
}



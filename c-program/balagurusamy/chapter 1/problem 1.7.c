//uses of multiple function  questiom 1.6
#include<stdio.h>
#include<conio.h>

int add (int a,int b);
int dif (int a, int b);
int main()
{
	int a,b,c,d;
	a=20;
	b=10;
	c=add(a,b);
d=dif(a,b);
	printf(" sum= %d , diffrence = %d ,",c,d);
	getch ();
	return 0;
	}


int add(int a,int b)
{
	int p;
	p=a+b;
	return (p);
	
}

int dif (int a, int b)
{
	int m;
	m=a-b;
	return (m);
}





#include<stdio.h>
#include<conio.h>
#include<math.h>
void area(int ,int ,int,float *);
void main()
{
	printf("Name-Siddharth Raj \nRoll no- 1704044\n");
	int a,b,c;
	float ar;
	printf("enter side a  b  c=");
	scanf("%d%d%d",&a,&b,&c);
	
	area(a,b,c,&ar);
	printf("area of triangle = %.2f",ar);
	
	getch ();
}

void area(int a,int b,int c,float *ar)
{
	float s=(a+b+c)/2.0;
	*ar=sqrt(s*(s-a)*(s-b)*(s-c));
}

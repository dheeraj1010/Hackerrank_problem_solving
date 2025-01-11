#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter number a=");
	scanf("%d",&a);
	printf("enter number b =");
	scanf("%d",&b);
	
	int sum=0,mul=0,sub=0;
	float div;
	sum=a+b;
	mul=a*b;
	sub=a-b;
	div=(float)a/b;
	
	printf("\n%d+%d =%d ,%d*%d=%d  ,%d-%d=%d ,%d/%d=%.2f",a,b,sum,a,b,mul,a,b,sub,a,b,div);
	getch ();
	
}

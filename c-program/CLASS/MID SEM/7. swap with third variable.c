#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\na=%d ,b=%d",a,b);
	getch ();
	
}

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a,b,c;
	
	printf("swapping two number\n");
	printf("enter the value of a=");
	scanf("%d",&a);
	
	printf("enter the value of b=");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\na=%d\nb=%d",a,b);
	
	return 0;
	
}

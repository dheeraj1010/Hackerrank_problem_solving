#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()

{

	int a,b;
	
	printf("swapping of two numbers\n");
	printf("enter the value of a=");
	scanf("%d",&a);
	
	printf("enter the value of b=");
	scanf("%d",&b);
	
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\na=%d\nb=%d",a,b);
	
	return 0;
	
}

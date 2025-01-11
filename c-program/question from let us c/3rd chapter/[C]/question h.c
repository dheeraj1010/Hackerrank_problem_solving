/* write a program to find the absolute value of a number entered through the keyboard */

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a;
	printf("enter any number to find there absolute value\n");
	scanf("%d",&a);
	
	if(a<0)
	{printf("absolute value of %d is %d",a,-a);
	}
	else
	printf("absolute value of %d is %d ",a,a);
	
	return 0;
}

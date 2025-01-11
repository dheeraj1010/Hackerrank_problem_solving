/* Write a program to check weathr a traingle is valid or not,
when the three angles of the traingleare entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to180 degrees.*/
#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	int a,b,c,sum;
	
	
	printf("check the traingle is valid ornot via entering the all the angle ");
	printf("\nplease enter the angle <A= ");
	scanf("%d",&a);
	
	printf("please enter the angle <B= ");
	scanf("%d",&b);
	
	printf("please enter the angle <C = ");
	scanf("%d",&c);
	
	sum=a+b+c;
	
	if(sum==180&&a!=0&&b!=0&&c!=0)
	{printf("\ntraingle is correc\n\n");
	
	}
	
	else
	printf("\n the angle of triangle is invalid\n\n");
	return 0;
	
}

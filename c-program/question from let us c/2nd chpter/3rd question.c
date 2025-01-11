/*if a four digit number isinput through the keyboard ,write a program 
to obtain the sum of the first and last digit of this number*/
#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	int n,a,b,sum;
	printf("sum of first and last digit of four digit number");
	printf("\nplease enter the four digit number\n");
	scanf("%d",&n);
	
	a=n/1000;
	b=n%10;
	sum=a+b;
	
	printf("sum of first and fourth digit  %d+%d = %d",a,b,sum);
	
	return 0;
	
}

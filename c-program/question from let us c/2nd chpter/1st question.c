/*if a five digit number isinput through the keyboard ,write a program
to calculate the sumofits digit.*/
#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()

{
	int n,a,b,c,d,e,f,g,h,sum=0;
	
	printf("calculate of the sum of digit of five digit number");
	printf("\n\nplease enter five digit number\n");
	scanf("%d",&n);
	a=n/10000;
	b=n%10000;
	c=b/1000;
	d=n%1000;
	e=d/100;
	f=n%100;
	g=f/10;
	h=n%10;
	sum=a+c+e+g+h;
	printf("sum of digits ofnumber  %d+%d+%d+%d+%d =%d",a,c,e,g,h,sum);
	
	return  0;
	
	
	
	}

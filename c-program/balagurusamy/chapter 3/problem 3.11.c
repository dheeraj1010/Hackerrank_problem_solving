/* Write  a program to read a fouer digit integer and print the sum of its digits */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,digit,i,sum,x=1000;
	printf("Write  a program to read a fouer digit integer and print the sum of its digits\n\n");
	printf("enter a four digit number =");
	scanf("%d",&n);
	int y=n;
	for(i=1;i<=3;i++)
	{
		digit=n/x;
		sum=sum+digit;
		n=n%x;
		x=x/10;		
	}
	printf("sum of digits of number %d  is %d",y,sum);
	
	getch ();
}

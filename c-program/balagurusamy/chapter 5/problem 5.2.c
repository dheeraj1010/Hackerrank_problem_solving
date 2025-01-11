//write a program to find the number of and sum of all integer greater than 100 and less than 200
//that are divisible by 7
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
void main()
{
	int n=100,sum;
	
	for(n=100;n<=200;n++)
	{
		n%7==0?(printf("%d +",n),sum=sum+n):1;
	}

getch ();
}

/* Write a program to determine weather a given number is 'odd' or 'even' and print the messege 
NUMBER IS EVEN 
or
NUMBER IS ODD*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n;
	printf("enter a number to check number is odd or even =");
	scanf("%d",&n);
	n%2==0?(printf("\nNUMBER IS EVEN")):(printf("\nNUMBER IS ODD"))
	getch ();
	}

/* Write a program to find the factorial value of any number entered through the keyboard*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,n,f=1;
	
	printf("enter any number to calculate factorial =");
	scanf("%d",&n);
	x=1;
	while(x<= (n))
	{

f=f*(x);
		x++;
		
	}
	printf("factorail of %d is = %d",n,f);
	getch ();
	return 0;
}

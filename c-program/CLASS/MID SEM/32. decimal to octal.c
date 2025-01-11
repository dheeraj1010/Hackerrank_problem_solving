#include<stdio.h>
#include<conio.h>
void main()
{
	// to convert decimal to octal
	int n,octal,rem,base=1;
	printf("enter a number =");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%8;
	    octal=octal+rem*base;
	    n=n/8;
	    base=base*10;
	}
	printf("%d",octal);
	getch ();
}

#include<stdio.h>
#include<conio.h>

void main()
{
	int n,rem,k,octal,base=1;
	printf("Name-Himanshu chaudhary\nRoll no-1704004\n");
	printf("enter a decimal number =");
	scanf("%d",&n);
	k=n;

	
	while(n>0)
	{
         rem=n%8;
         octal=octal+rem*base;
         n=n/8;
         base=base*10;
			}
			printf("%d in octal is %d",k,octal);
			
			getch ();
			
}

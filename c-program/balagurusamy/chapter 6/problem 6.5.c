#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,number,rem,k;
	printf("to reverse a number \n");
	printf("enter a number =");
	scanf("%d",&n);
	k=n;
	
	for(;n>0;n/=10)
	{
		rem=n%10;
		number=number*10+rem;
	}
	printf("\n reverse of number  %d is %d",k,number);
	getch ();
	
}

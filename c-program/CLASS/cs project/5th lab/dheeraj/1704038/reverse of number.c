#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,rev=0,rem=0;
	printf("Name-Dheeraj kumar\nRoll no-1704038\n");
	printf("enter a number = ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		rev=rem+rev*10;
		n=n/10;
		
		
	}
	printf("%d",rev);
	getch ();
	return 0;
	
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rev,rem;

printf("enter a number =");
scanf("%d",&n);

while(n>0)
{
	rem=n%10;
	rev=rem+rev*10;
	n=n/10;
	}	
	printf("reverse =%d",rev);
	getch ();
}

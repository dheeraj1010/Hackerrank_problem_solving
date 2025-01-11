//to covert from decimal to binary number
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,rem,binary,x,base=1;
	printf("Name-Dheeraj kumar\nRoll no-1704038\n\n");
	printf("enter a number = ");
	scanf("%d",&n);
	x=n;
     while(n!=0)
     {
     	rem=n%2;
     	binary=binary+rem*base;
     	n=n/2;
     	base=base*10;
	 }
	 printf("binary of %d is %d ",x,binary);
	
	 getch ();
	 return 0;
}

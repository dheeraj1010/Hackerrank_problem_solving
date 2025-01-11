#include<stdio.h>
#include<conio.h>

void main()
{
	int n,s=0;
	printf("enter number :");
	scanf("%d",&n);
	
	while(n>0)
	{
		s=s+(n%10);
		n/=10;
		
	}
	printf("\nsum of digits :%d ",s);
	
	
}

//WAP check whether a given is a palindrome or not
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,rev=0,copy;
	printf("enter a number :");
	scanf("%d",&n);
	copy=n;
while(n>0)
   {
	rev=rev*10+(n%10);
	n/=10;
	
	}
	if(copy==rev)
	{
		printf("\ngiven number is pallindrome ");
		
		}
		
		else
		printf("given number is not pallindrom");
		
		
			
}

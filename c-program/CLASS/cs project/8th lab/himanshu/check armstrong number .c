#include<stdio.h>
#include<conio.h>
int arm(int);

void main()
{
	int n,check;
	printf("Name-Himanshu chaudhary\nRoll no-1704004\n");
	printf("enter a number =");
	scanf("%d",&n);
	check=arm(n);
	if(check==1)
	printf("%d is an armstrong number ",n);
	else
	printf("%d is not an armstrong number ",n);
	
	getch ();
}

int arm(int n)
{
	int rem,digit=0,copy=n,a=0,i=0;
	
	while(copy!=0)
	{
		digit++;
		copy=copy/10;
	}
	copy=n;
while(copy!=0)
	{
		rem=copy%10;
		a+=pow(rem,digit);
		copy/=10;
	}
	if(a==n)
	return 1;
	else
	return 0;
	
}


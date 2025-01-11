#include<stdio.h>
#include<conio.h>
int sum(int ,int);//function define
int main()
{
	int a,b,s;
	printf("Name-Himanshu chaudhary\nRoll no-1704004\n");
	printf("enter a =");
	scanf("%d",&a);
	printf("enter b =");
	scanf("%d",&b);
	s=sum(a,b);
	printf("\nsum of %d and %d =%d",a,b,s);
	getch ();
	
	}
	int sum(int a,int b)
	{
		return (a+b);
	}

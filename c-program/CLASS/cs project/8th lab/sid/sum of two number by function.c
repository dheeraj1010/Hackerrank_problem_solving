#include<stdio.h>
#include<conio.h>
int sum(int ,int);

int main()
{
	int a,b,s;
	printf("Name-Siddharth raj\nRoll no-1704044\n");
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

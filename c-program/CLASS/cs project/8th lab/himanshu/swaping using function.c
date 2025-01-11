#include<stdio.h>
#include<conio.h>
int swap(int *, int *);
void main()
{
	int a,b;
	printf("Name-Himanshu chaudhary\nRoll no-1704004\n");
	printf("enter a =");
	scanf("%d",&a);
	printf("enter b =");
	scanf("%d",&b);
	
	swap(&a,&b);
	printf("\nafter swaping a= %d, b= %d",a,b);
	getch ();
}

int swap(int *a,int *b)
{
	int x;
	x=*a;
	*a=*b;
	*b=x;
	
}


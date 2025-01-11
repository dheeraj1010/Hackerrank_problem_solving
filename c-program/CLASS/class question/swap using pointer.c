#include<stdio.h>
#include<conio.h>

int swap(int *,int *);

main()
{
	int a,b;
	printf("enter a and b :");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\na= %d ,b=%d ",a,b);
	
	getch ();
	}

int swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

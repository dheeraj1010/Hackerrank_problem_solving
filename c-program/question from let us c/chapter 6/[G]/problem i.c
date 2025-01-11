#include<stdio.h>
#include<conio.h>
void circular_shift(int *,int *, int *);
void main()
{
	int a,b,c;
	
	printf("enter a =");
	scanf("%d",&a);
	printf("enter b =");
	scanf("%d",&b);
	printf("enter c=");
	scanf("%d",&c);
	circular_shift(&a,&b,&c);
	printf("\na=%d ,b=%d ,c=%d",a,b,c);
	getch ();
}

void circular_shift(int *x,int *y,int *z)
{
	int m;
	m=*x;
	*x=*z;
	*z=*y;
	*y=m;
	
}

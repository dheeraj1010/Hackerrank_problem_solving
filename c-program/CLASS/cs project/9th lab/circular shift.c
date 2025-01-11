#include<stdio.h>
#include<conio.h>
#include<math.h>
void circular(int *,int *,int *);
void main()
{
	printf("Name-dheeraj kumar\nRoll no- 1704038\n");
	int x,y,z;
	printf("enter three numbers =");
	scanf("%d%d%d",&x,&y,&z);
	circular(&x,&y,&z);
	printf("\nx= %d ,y=%d ,z=%d",x,y,z);
	
	getch ();
}

void circular(int *x,int *y,int *z)
{
	int m=*x;
	*x=*z;
	*z=*y;
	*y=m;
	
}

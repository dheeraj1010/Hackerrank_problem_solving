#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int y,x;
	printf("enter the value of x =");
	scanf("%d",&x);
	
	printf("\n");
	
	y=x>0?1:(x==0?0:-1);
	
	printf("y=%d",y);
	getch ();
}


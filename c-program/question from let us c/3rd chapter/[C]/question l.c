/* Given a point (x,y) write a program to find out if it lies on the x-axis ,
y-axis or on the origin , viz.(0,0) */
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int x,y;
	printf("to check point lies on the x axis, y axis, or origin");
	printf("\n enter x cordinate of the point =");
	scanf("%d",&x);
	
	printf("enter y cordinate of the point =");
	scanf("%d",&y);
	
	if(x==0&&y==0)
	{printf("\n\npoint lies on the origin");
	}
	else if(x==0)
	{printf("\n\npoint lies on the y axis");
	}
	
	else if(y==0)
	{
		printf("\n\npoint lies on the x axis");
	}
	
	else
return 0;
}

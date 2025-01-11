//to calculate the distance between two points 
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	float d;
	printf("to claculate distance betwwen two point\n\n");
	printf("enter the value of x1  y1 = ");
	scanf("%d%d",&x1,&y1);
	printf("enter the value of x2   y2  =" );
	scanf("%d%d",&x2,&y2);
	d=pow((x2-x1)*(x2-x1)+(y1-y2)*(y1-y2),0.5);
	printf(" distance between two point is = %.2f",d);
	getch ();
	return 0;
}

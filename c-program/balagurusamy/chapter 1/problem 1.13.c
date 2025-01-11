//to clacultae area of circle 
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float area,rad,d;
	
	int x1=2,x2=5,y1=2,y2=6;
		d=pow((x2-x1)*(x2-x1)+(y1-y2)*(y1-y2),0.5);
		rad=d/2;
		area=3.14*rad*rad;
		
		printf("area of circle = %.2f",area);
		getch ();
		return 0;
}

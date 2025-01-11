//to clacultae area and perimeter of circle 
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float area,rad,per,d;
	
	int x1=0,x2=4,y1=0,y2=5;
		d=pow((x2-x1)*(x2-x1)+(y1-y2)*(y1-y2),0.5);
		rad=d/2;
		area=3.14*rad*rad;
		per=2*3.14*rad;
		printf("area of circle = %.2f\nperimeter of circle is = %.2f",area,per);
		getch ();
		return 0;
}

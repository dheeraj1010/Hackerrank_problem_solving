#include<stdio.h>
#include<conio.h>
#include<math.h>

float area_tri(int a,int b, int c);
void main()
{
	int a,b,c;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	printf("enter c=");
	scanf("%d",&c);
	
	float area=area_tri(a,b,c);
	printf("area of triangle =%.2f",area);
	
	getch ();
	
}

float area_tri(int x,int y,int z)
{
	float s=(x+y+z)/2.0;
	float area=sqrt(s*(s-x)*(s-y)*(s-z));
	return area;
}

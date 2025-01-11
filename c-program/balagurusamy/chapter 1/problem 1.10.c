// Area of triangle
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float area,s,a,b,c;
	printf("to calculate area of triangle\n\n ");
	printf("enter the value of side a =");
	scanf("%f",&a);
	printf("enter  the vlaue of side b =");
	scanf("%f",&b);
	printf("enter the vlaue of side c =");
	scanf("%f",&c);
	s=(a+b+c)/2;
	area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
	printf("area of triangle of side %.2f ,%.2f ,%.2f is equal to %.2f unit square",a,b,c,area);
	getch ();
	return 0;
	
}

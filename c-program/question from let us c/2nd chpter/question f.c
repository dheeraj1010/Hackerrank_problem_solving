#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()

{
	int a,b,c,e;
	float  area,s,d;
	
	printf("to find area of tringle by enter three side of triangle(only integer value)n\n");
	
	printf("enetr the length of side a = ");
	scanf("%d",&a);
	
	printf("enter the length of side of b = ");
	scanf("%d",&b);
	
	printf("enetr the length of side c =");
	scanf("%d",&c);
	if(a+b<c)
	{
	printf("please enter correct value of side c. condition is  a+b>c\n");
	printf("enetr the value of c =");
	scanf("%d",&e);
	c=e;
		s=(a+b+c)/2;
	d=s*(s-a)*(s-b)*(s-c);
	area=sqrt(d);
	printf("area of triangle= %f metre square",area);
}
	 else
	 
	
{	//areaof triangle 
	s=(a+b+c)/2;
	d=s*(s-a)*(s-b)*(s-c);
	area=sqrt(d);
	printf("area of triangle= %f meter square",area);}
	getch ();
	 return 0;
	
	
}

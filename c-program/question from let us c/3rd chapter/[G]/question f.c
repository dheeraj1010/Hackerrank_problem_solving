/*if the three sides of a triangle are entered through the keyboard ,
write a program to check weather the ttriangle is valid or not .
the triangle is isosceles,equilateral ,scalane or right angled triangle*/
#include<stdio.h>
int main()

{
	int a,b,c;
	
	printf("to check the type of the triangle\n\n");
	
		printf("enter length of side a= ");
 	scanf("%d",&a);
 	
 	printf("enter length of side b= ");
 	scanf("%d",&b);
 	
 	printf("enter length of side c= ");
 	scanf("%d",&c);
 	
 	if(a==b||a==c||b==c)
 	printf("triangle is isoceles triangle");
 	
 	else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
printf("traingle is right angled triangle");
else if(a==!b&&a==!c&&b==!c)
printf("triangle is scalene triangle");
else if(a==b||b==c||a==c)
printf("triangle is equilateral triangle");

else 
return 0;

	
}

/* Given the values of the variables x,y and z , write a program to rotate thier values such that 
x has the of y, y has the value of z ,and z has the value of x*/
#include<stdio.h>
#include<conio.h>
int main()
{
	printf("Given the values of the variables x,y and z , write a program to rotate thier values such that \n");
	printf("x has the of y, y has the value of z ,and z has the value of x\n\n");
	int x,y,z,a,b;
	printf("enter the value of x =");
	scanf("%d",&x);
	printf("enter the value of y=");
	scanf("%d",&y);
	printf("enter the value of z = ");
	scanf("%d",&z);
	a=x;
	x=y;
	y=z;
	z=a;
	printf("x= %d, y= %d, z= %d ",x,y,z);
	getch ();
	return 0;
}

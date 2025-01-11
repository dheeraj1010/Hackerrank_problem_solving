#include<stdio.h>
#include<conio.h>

int main()
{
	float x,a,b,c;
	printf("program for calculate the value of a/(b-c) \n\n");
	printf("enter the value of a =");
	scanf("%f",&a);
	printf(" enter the value of b =");
	scanf("%f",&b);
	printf(" enter the vlaue of c =");
	scanf("%f",&c);
	x=a/(b-c);
	printf(" value of a/(b-c)= %.2f",x);
	getch ();
	return 0;
}

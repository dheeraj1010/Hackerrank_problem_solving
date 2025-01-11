#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
void main()
{
	float n=10.45678,y;
	y=log(n);
	printf("e%.2f",y);
	printf("\ne%.4f",y);
	printf("\ne%.8f",y);
	getch ();
}

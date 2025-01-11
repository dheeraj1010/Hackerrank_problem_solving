#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
short int z;
	x=123456;
	y=654321;
	z=x+y;
	printf("%d",z);
	getch ();
	return 0;
}
//there is the problem of short added before the z so it can store up to certain digit
//if we add long before z then we get the correct detail

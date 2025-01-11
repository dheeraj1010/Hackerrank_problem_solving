/*************************************************
Write a program to fill the entire screen with a smiling face . the smiling face has an ASCII value 1*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int count,a;
	a=1;
	for(count=1;count<=5000;count++)
	{
		printf("%c",a);
		
	}
	getch ();
	return 0;
}

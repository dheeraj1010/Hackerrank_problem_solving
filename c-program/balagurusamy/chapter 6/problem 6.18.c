#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n;
	
	for(n=1;n<=100;n++)
	{
		if(n%2!=0&&n%3!=0)
		printf(" %d  ",n);
	}
	getch ();
}

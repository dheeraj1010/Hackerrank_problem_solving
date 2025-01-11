#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,j,k;
	for(i=6;i>0;i--)
	{
		for(k=6;k>i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch ();
}

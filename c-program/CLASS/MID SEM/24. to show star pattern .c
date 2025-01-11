#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k,space=0;
	
	for(i=5;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
		space++;
		for(k=0;k<space;k++)
		{
			printf(" ");
		}
	}
	getch ();
}

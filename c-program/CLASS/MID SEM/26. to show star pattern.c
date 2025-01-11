#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,space=5;
	for(i=1;i<6;i++)
	{
		for(k=0;k<space;k++)
		{
			printf(" ");
		}
		
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
		}
	getch ();
}

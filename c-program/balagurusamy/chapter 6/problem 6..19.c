#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i!=3||j!=3)
			{
				printf(" S");
			}
				else
				printf(" O");
			
			
		}
		
		printf("\n");
	}
	getch ();
}

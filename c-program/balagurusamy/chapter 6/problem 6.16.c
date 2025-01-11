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
			printf(" S");
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
	      if(i==1||i==5)
			printf(" S");
			else
			{
				if(j==1||j==5)
				printf(" S");
				else
				printf("  ");
			}
		}
		printf("\n");
	}
	getch ();
}

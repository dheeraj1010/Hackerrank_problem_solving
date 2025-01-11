#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	
	int i,j,arr[5][5];
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==j)
			{
				arr[i][j]=1;
			}
			else
			arr[i][j]=0;
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n");
		for(j=0;j<5;j++)
		{
			printf(" %d ",arr[i][j]);
		}
		
	}
	getch ();
}

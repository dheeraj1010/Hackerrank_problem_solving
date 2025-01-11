//draw a table
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float x,y,j=0.1;
	int i;
	
	printf("x");
	for(i=1;i<10;i++)
	{
		printf("    %.2f",j);
		j=j+0.1;
	}
	
	
  for(i=1;i<10;i++)
	{
			printf("\n");
		printf("%d",i);
		for(j=0.1;j<1;j=j+0.1)
		{
			x=i+j;
			y=exp(-x);
			printf("    %.4f",y);
		}
	
	}
	getch ();
}

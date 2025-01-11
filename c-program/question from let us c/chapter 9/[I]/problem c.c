#include<stdio.h>
#include<conio.h>

int main()
{
	int n[10],i,lowest;
	
	printf("enter 10 elements of an array :\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
		
	}
	lowest=n[0];
	
	for(i=0;i<10;i++)
	{
		if(lowest>n[i+1])
		{
			lowest=n[i+1];
		}
	}
	
	printf("\nlowest number  =%d ",lowest);
	
	getch ();
		
	
	
}

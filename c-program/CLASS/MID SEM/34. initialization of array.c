#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i;
	
	for(i=0;i<10;i++)
	{
		printf("enter a[%d]=",i+1);
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<10;i++)
	{
		printf("a[%d] =%d\n",i+1,a[i]);
	}
	getch ();
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i,n;
	printf("Name-Dheeraj kumar\nRoll no-1704038\n");
	
	printf("enter a number to search in array=");
	scanf("%d",&n);
	
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			printf("a[%d]  is equal to %d",i+1,n);
			break;
		}
	}
	getch ();
}

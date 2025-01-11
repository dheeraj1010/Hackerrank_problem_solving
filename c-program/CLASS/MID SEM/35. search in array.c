#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[10]={1,25,12,14,10,9,5,6,4,74};
	
	printf("enter a number to search =");
	scanf("%d",&n);
	
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			printf("a[%d] =%d",i+1,n);
			break;
		}
	}
	getch ();
}

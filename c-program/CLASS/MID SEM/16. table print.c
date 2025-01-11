#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("To print table of any number \n enter value of n=");
	scanf("%d",&n);
	printf("  TABLE\n");
	for(i=1;i<=10;i++)
	{
		printf("  %d\n",n*i);
	}
	
	getch ();
	
}

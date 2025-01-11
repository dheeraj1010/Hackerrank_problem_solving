#include<stdio.h>
#include<conio.h>

void modify(int *);

main()
{
	int n[10],i;
	printf("enter 10 elements of an array :\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	
	modify(n);
	
	printf("\nmodified elements of array :\n");
	
	for(i=0;i<10;i++)
	{
		printf("  %d ",n[i]);
	}
	
	getch ();
}

void modify(int *n)
{
	int i;
	for(i=0;i<10;i++)
	{
		n[i]*=3;
	}
	
}




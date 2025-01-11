#include<stdio.h>
#include<conio.h>
#define size 10
main()
{
	int a[size],copy[size];
	short int i;
	printf("enter 10 elemnets of first array :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		copy[i]=a[size-(i+1)];
    }
    
    printf("\nreverse array :\n");

	for(i=0;i<size;i++)
	{
		printf("  %d",copy[i]);
		
	}
	
	getch ();
}

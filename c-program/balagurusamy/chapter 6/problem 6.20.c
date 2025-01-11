#include<stdio.h>
#include<conio.h>
#include<conio.h>

void main()
{
	float n[10],sum;
	int i;
	
	printf("enter value of n ten times \n\n");
	
	for(i=0;i<10;i++)
	{
		printf("enter value of n=");
		scanf("%f",&n[i]);
		if(n[i]>0)
		{

		sum=sum+n[i];
	}
	
	}
	
		if(sum<999)
		{
		
	printf("\nsum =");
	for(i=0;i<10;i++)
	{
		if(n[i]>0)
		printf(" %.0f+",n[i]);
	}

	printf("=%.1f",sum);
}
	else
	printf(" \nerror sum of positive number >999");
	
	getch ();
}

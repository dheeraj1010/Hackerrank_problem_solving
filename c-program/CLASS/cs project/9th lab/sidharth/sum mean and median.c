#include<stdio.h>
#include<conio.h>
void fun(int *,float *,float *,float *);

void main()
{
	printf("Name-Siddharth Raj \nRoll no- 1704044\n");
	int arr[4],i,j;
	float sum,mean,median;
	
	
	printf("enter a b c :\n");
	for(i=0;i<3;i++)
	{
	
	scanf("%d",&arr[i]);
}
	fun(arr,&sum,&mean,&median);
	printf("\nsum =%.0f",sum);
	printf("\nmean = %.2f",mean);
	printf("\nmedian =%.2f",median);
	
	getch ();
}

void fun(int *a,float *sum,float *mean,float *median)
{
	
	int m,i,j;
	
	*sum=a[0]+a[1]+a[2];
	*mean=*sum/3;
		//arrange in ascending order
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		 if(a[j]>a[j+1])
		 {
		 	m=a[j];
		 	a[j]=a[j+1];
		 	a[j+1]=m;
		 }
		}
		
	}
	*median=a[1];

	
	
}

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n;
	printf("enter no of data you want to add : ");
	scanf("%d",&n);
	
	int data[n],i,j;
	
	printf("\nenter the no. one by one :");
	
	float sum=0,mean,s_d;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	 sum+=data[i];	
	}
	
	mean=sum/n;
	sum=0;
	for(i=0;i<n;i++)
	{
		sum+=(data[i]-mean)*(data[i]-mean);
		
	}
	s_d=sqrt(sum)/n;
printf("\n\nmean = %.2f , standard deviation = %.2f ",mean,s_d);

getch ();	
	
}

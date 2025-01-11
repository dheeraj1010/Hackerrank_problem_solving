#include<stdio.h>
#include<conio.h>

//to check prime no 
main()
{
	int MAX;
	printf("enter number :");
	scanf("%d",&MAX);
	
	int n[MAX],i,j;
	
	for(i=0;i<MAX;i++) //initialising
	n[i]=i+1;
	
	for(i=2;i<MAX;i++)
	{
	   if(n[i]!=0)
	   {
	   	    for(j=i+1;j<MAX;j++)
	      	{
	   		   if(n[j]!=0)
	   		   {
	   			if(n[j]%n[i]==0)
	   			{
	   				n[j]=0;
				   }
			   }
		    }
	   } 
	   
	}
	
	printf("\n\nprime number ::\n");
	for(i=2;i<MAX;i++)
	{
		if(n[i]!=0)
		printf(" %d ",n[i]);
	}
}

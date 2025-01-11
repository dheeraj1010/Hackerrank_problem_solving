#include<stdio.h>
#include<conio.h>

void main()
{
	int cred[16],i,sum1=0;
	printf("enter 16 digit credit card number :\n:");
	for(i=0;i<16;i++)
	{
		scanf("%d",&cred[i]);
	}
	
	for(i=14;i>=0;i-=2)
	{
		cred[i]*=2;
		if(cred[i]>10)
		cred[i]=cred[i]-9;
		sum1=sum1+cred[i];
		
	}
	int sum2=0;
	for(i=1;i<15;i+=2)
	{
		sum2=sum2+cred[i];
		
	}
	int sum=sum1+sum2;
	if(sum%10==0)
	{
		printf("\n it is valid crad no ");
		
	}
	
	getch ();
}


#include<stdio.h>
int main()
{
	int d;
	float f;
	printf("to calculate fine of libraray\n\n");
	printf("enter the number of day to late to return the book =");
	scanf("%d",&d);
	
	if(d<=5)
	{
	f=0.5*d;
	printf("\n\nyour library fine is %d*0.5=%f",d,f);
}
	else if(d>5&&d<=10)
	printf("\n\nyour library fine is %d*1=%d",d,d);
	
	else if(d>10&&d<=30)
{
		f=d*5;
	printf("\n\nyour library fine is %d*5=%f",d,f);
}
	else if(d>30)
	printf("\n\nyour membership of library is canclelled\n\n ");
	else
	return 0;
	
}

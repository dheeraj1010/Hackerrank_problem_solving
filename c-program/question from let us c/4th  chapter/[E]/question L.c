/* summation of logrithimic series */
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,i;
	float sum,y;
	printf("sum of series \n\n");
	printf("enter the value of x =");
	scanf("%d",&x);
	
	y=(x-1)/(float)x;
	
	for(i=1;i<=7;i++)
	{
		sum=sum+pow(y,i);
	}
	printf("\n\nsum of series = %5.3f",sum);
}

// sum of series
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	float sum;
	printf("sum of series 1/1 +1/2 +1/3 +1/4+........1/n\n");
	printf("\n\nenter the value of n =");
	scanf("%d",&n);
	
	printf("\nsum=");
	
	for(i=1;i<=n;i++)
	{
		sum=sum+(1.0/i);
		printf("1/%d +",i);
	}
	printf(" =%f",sum);
	getch ();
	return 0;
}

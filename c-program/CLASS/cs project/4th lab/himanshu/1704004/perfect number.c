#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("Name-Himanshu Chaudhary\nRoll-1704004\n");
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
		
			sum=sum+i;
		}
	
		
	}
	printf("\n");
	if(sum==n)
	{
		printf(" %d is perfect number ",n);
	}

else
printf("%d is not a perfect number",n);
		getch ();
		
}

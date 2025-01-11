#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,i,t,d,temp,c=0,sum=0;
	printf("Name-dheeraj kumar\nRoll no-1704038\n");
	printf("Enter the number\n");
	scanf("%d",&n);
	t=n;
	temp=n;
	while(n>0)
	{
		n=n/10;
		c++;
	}
	
	while(t>0)
	{
		d=t%10;
		t=t/10;
		sum=sum+pow(d,c);
		
	}
	if(sum==temp)
	printf(" Armstrong number");
	else
	printf("Not Armstrong number");
	getch();
}

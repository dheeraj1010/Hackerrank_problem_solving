#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,m,k,count=0,sum,rem;
	printf("enter a number =");
	scanf("%d",&n);
	k=n;
	m=n;
	while(n>0)
	{
		count++;
	n=n/10;
		
	}
	
	while(k>0)
	{
	rem=k%10;
	k=k/10;	
	sum=sum+pow(rem,count);
	}
	
	if(sum==m)
	{
		printf("%d is armstrong number ",m);
	}
	else
	printf("%d is not a armstrong number",m);
	
	getch ();
	
}

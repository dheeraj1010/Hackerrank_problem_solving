#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>

void main()
{
	int n,i,k,j;
	
	printf("enter a psitive integer =");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		printf("%d is not a prime number \n",n);
		k=1;
		break;
		}
	}
if(k==0)
printf("%d is a prime number\n ",n);

printf("prime number between 1 to 100\n");
printf(" 2 ");
for(i=100;i>=100&&i<=200;i++)
{
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		break;
		else if(i==j+1)
		printf("  %d\n",i);
	}
}

getch ();
}

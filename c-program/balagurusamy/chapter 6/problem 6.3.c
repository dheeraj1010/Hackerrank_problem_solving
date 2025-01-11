#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	
	int n,sum,rem;
	printf("to compute sum of digit of  given integral number \n");
	printf("enter a number =");
	scanf("%d",&n);
	
	printf("sum of digits of number %d is ",n);
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		sum=sum+rem;
		printf("%d+",rem);
	}
	printf(" =%d",sum);
	
	getch ();
	}

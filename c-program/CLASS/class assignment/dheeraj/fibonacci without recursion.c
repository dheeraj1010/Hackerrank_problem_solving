#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,c=0,fib=1,first=0,d=1;
	printf("enter number of terms of fibonacci series =");
	scanf("%d",&n);
	printf("fibonacci series ==\n");
	
	for(c=0;c<=n;c++)
	{
		if(c==0)
		fib=0;
		else if(c==1)
		fib=1;
		else
		{
		
		fib=d+first;
		first=d;
		d=fib;
			printf(" %d\n",fib);
		}
		
		
	}
	getch ();
}

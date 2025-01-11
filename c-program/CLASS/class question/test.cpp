#include<stdio.h>
#include<conio.h>
#include<math.h>

int mult(int n[]);

main()
{
	int n[23],i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	mult(n);
	
}

int mult(int n[])
{int i;
	for(i=0;i<10;i++)
	{
		printf("%d\n",n[i]);
	}
}

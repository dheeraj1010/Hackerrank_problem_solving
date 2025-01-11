#include<stdio.h>
#include<conio.h>
#define terms 10

main()
{
	int a[terms],ans;
	printf("enter %d element of array :\n",terms);
	for(i=0;i<terms;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<terms;i++)
	{
		if(a[i]!=a[terms-[i+1]])
		{
			printf("\na[n]!=a[n-1]");
			ans=0;
			break;
		}
		ans=1;
	}
	
	if(ans==1)
{
	printf("\na[n]==a[n-1]");
	}	
	
	getch ();
}

#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
	int n[5],i,sum=0;
	
	printf("enter 5 number :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
		sum+=n[i];
	}
	float y=0,av=sum/5.0;
	
for(i=0;i<5;i++)
{
	y+=(n[i]-av)*(n[i]-av);
	
}
float sd=sqrt(y);
printf("\nstandard deviation =%.2f",sd);

getch ();
}

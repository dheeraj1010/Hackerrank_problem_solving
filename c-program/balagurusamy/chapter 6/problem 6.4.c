//fibonacci seres
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	printf("fibonacci series\n");
int i=1,j=1,sum,n,count;
	printf("enter no of terms to claculate=");
	scanf("%d",&n);
	printf("fibonacci series =%d %d ",i,j);
	do
	{
		sum=i+j;
		i=sum-i;
		j=sum;
		printf(" %d",sum);
		count++;
	}
	while(count<=n);
	getch ();
}

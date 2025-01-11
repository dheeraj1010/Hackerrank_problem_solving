#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int p,r,n,q,i=1,a;
	for(i=1;i<=10;i++)
	{
	
	printf("to calculate compund interest\n");
	printf("enter the principle amount = ");
	scanf("%d",&p);
	printf("enter the r rate =");
	scanf("%d",&r);
	printf("enter the n  for number of year=");
	scanf("%d",&n);
	printf("enter the compund q times per year = ");
	scanf("%d",&q);
	a=p*pow((1+r/q),n*q);
	printf(" a= %d\n________________________________________________________________________________________\n",a);
}
getch ();
return 0;
	
}

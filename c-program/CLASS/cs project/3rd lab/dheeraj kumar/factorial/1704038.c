#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,fac;
	printf("NAME-DHEERAJ KUMAR\nROLL NO-1704038");
	printf("\n\nenter  value of n to calculate factorial =");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
		printf("\n\nfactorial of %d = %d",n,fac);
	getch ();
	return 0;
}

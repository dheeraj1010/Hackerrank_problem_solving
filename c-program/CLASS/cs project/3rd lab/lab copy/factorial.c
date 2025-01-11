#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,fac;
	printf("enter  value to calculate factorial =");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
		printf("\n\nfactorial of %d = %d",n,fac);
	getch ();
	return 0;
}

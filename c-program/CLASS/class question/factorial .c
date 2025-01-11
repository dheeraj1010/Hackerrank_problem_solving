#include<stdio.h>
#include<conio.h>
int fac(int );

main()
{
	int n;
	printf("enter a number =");
	scanf("%d",&n);
	
	printf("\n factorial of %d = %d ",n,fac(n));
	
	getch ();
}

int fac(int n)
{
	if(n==1)
	return 1;
  else
  return n*fac(n-1);
}

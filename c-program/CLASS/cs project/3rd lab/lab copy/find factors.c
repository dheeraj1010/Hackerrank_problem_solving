#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("NAME-DHEERAJ KUMAR\nROLL NO-1704038");
	printf("\n\nenter the value n =");
	scanf("%d",&n);
	printf("\n factors of n =");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf(" %d , ",i);
		
	}
	
	getch ();
	return 0;
}

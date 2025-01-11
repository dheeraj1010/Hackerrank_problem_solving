#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,table;
	printf("NAME-DHEERAJ KUMAR\nROLL NO-1704038");
	printf("\n\nenter the a =");
	scanf("%d",&a);
	
	for(i=1;i<=10;i++)
	{
		table=a*i;
		printf("\n %d * %d= %d",a,i,table);
		
	}
	getch ();
	return 0;
}

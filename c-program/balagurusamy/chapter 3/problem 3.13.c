#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,x,b,c;
	printf("enter value of a,b,c=");
	scanf("%d%d%d",&a,&b,&c);
	
	x=(a>b?(a>c?a:c):(b>c?b:c));
	printf("largest among three number is %d",x);
	getch ();
}

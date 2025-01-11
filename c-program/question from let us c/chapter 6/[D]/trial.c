#include<stdio.h>
#include<conio.h>
int main()
{
	int sum(int ,int);
	int a,b,s;
	printf("enter  2 no =");
	scanf("%d%d",&a,&b);
	s=sum(a,b);
	printf("sum = %d",s);
	getch ();
	
}

int sum(int x,int y)
{
	int c;
	c=x+y;
	return c;
}

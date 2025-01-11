#include<stdio.h>
#include<conio.h>
int g_div(int ,int);

void main()
{
	int greatest;
	int a,b;
	printf("enter 2 number :");
	scanf("%d%d",&a,&b);
	if(a>b)
	 greatest=g_div(a,b);
	 else
	 greatest=g_div(b,a);
	printf("greatest divisior for %d and %d is = %d",a,b,greatest);
	
	getch ();
}

int g_div(int p,int q)
{
	int quot=p/q;
	if(p-quot*q==0)
	return q;
	else
	return g_div(q,p-quot*q);
}

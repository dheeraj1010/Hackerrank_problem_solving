#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter three side of triangle a  b  c=");
	scanf("%d%d%%d",&a,&b,&c);
	
	if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
	printf("it is side of triangle \n");
	else 
	printf("it cant be side of triangle");
	
	getch ();
return 0;	
}

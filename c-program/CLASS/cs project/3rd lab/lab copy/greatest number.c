#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
pritf("enter first number =");
scanf("%d",&a);

printf("enter 2nd numbe =");
scanf("%d",&b);

printf("enter 3rd number =");
scanf("%d",&c);

if(a>b)
{
	if(a>c)
	printf("\n%d is greatest number ",a);
	else
	printf("\n%d is greatest number ",c);
	
}
else
{
	if(b>c)
	printf("\n%d is greatest number",b);
	else 
	printf("\n%d is greatest number",c);
	
}
getch ();
return 0;
}

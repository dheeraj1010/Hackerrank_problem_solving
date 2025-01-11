#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,g,h;
	printf("please enter any three number to find the greatest number \n\n");
	printf("enter  first number = ");
	scanf("%d",&a);
	
	printf("enter second number = ");
scanf("%d",&b);

printf("enter  third number = ");
scanf("%d",&c);

g=(a>b?a:b);
h=(g>c?g:c);
printf("\n\n the greatest number out of three numbers is %d",h);

getch ();
return 0;

}

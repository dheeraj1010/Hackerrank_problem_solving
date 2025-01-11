#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,great;
	
	printf("enter first number =");
	scanf("%d",&a);
	printf("enter second number =");
	scanf("%d",&b);
	printf("enter third number =");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		printf("%d is greatest number ",a);
		else
		printf("%d is greatest number",c);
	}
	else
	{
		if(b>c)
		printf("%d is greatest number ",b);
		else
		printf("%d is greatest number ",c);
		
		
	}
	
	getch ();
	
}

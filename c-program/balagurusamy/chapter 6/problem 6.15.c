#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float c,d,n,p;
	printf("to claculate useful life of product \n\n");
	
	printf("enter the original cost of the product =");
	scanf("%f",&c);
	printf("enter depreciation rate of product per year (d<1)=");
	scanf("%f",&d);
	printf("enter the scrap value of the product=");
	scanf("%f",&p);
	
	n=log(p/c)/log(1-d);
	
	printf("\n\nthe useful life of product %.1f year",n);
	
	getch ();
}

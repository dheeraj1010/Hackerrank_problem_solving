#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,sum,dif,pro,div;
	printf("simple calculator\n\n");
	printf("enter the value of a=");
	scanf("%f",&a);
	printf("enetr the value of b =");
	scanf("%f",&b);
	
	sum=a+b;
	dif=a-b;
	pro=a*b;
	div=a/b;
	printf("x=%f              y=%f\n",a,b);
	printf("sum=%f             difference=%f\n",sum,dif);
	printf("product=%f       division=%f\n\n",pro,div);
	
}

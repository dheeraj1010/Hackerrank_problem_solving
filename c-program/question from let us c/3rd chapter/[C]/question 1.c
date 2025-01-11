/* a. if cost price and selling price of an item is input through the keyboard ,
write a program to determine wheather the seller has made profit to incurred losss.
also determine how much profit he had made or loss he incurred */

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()

{
	printf("tocalculate loss orprofit through selling price and cost price\n");
	
	int cp,sp,a,b;
	printf("please enter cost price =");
	scanf("%d",&cp);
	
	printf("please enter selling price =");
scanf("%d",&sp);

if(sp>cp)

{
a=sp-cp;
printf("seller  made profit of %d rs",a);
}
 else
  b=cp-sp;
  printf("seller made loss of %d rs ",b);
}



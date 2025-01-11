/*consider a currency systemin which there are notes of seven denominations , namely, 
Re.1,Rs.2,Rs.5,Rs.10,Rs.50,Rs.100. if a sum of Rs. N is entered 
through the keyboard ,write a program to compute the smallest number of notes that will combine togive Rs .N*/
#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()

{
	int n,a,b,c,d,e,f,g;
	printf("please enter the any amount so that i will calculate no of notes for you\n");
	
	scanf("%d",&n);
	a=n/100;
	b=n%100;
	c=b/50;
	d=(b%50)/10;
	e=(n%10)/5;
	f=(n%2)/2;
	g=n%2;
	
	printf("notes of Rs. 100=%d\n",a);
	printf("notes of Rs. 50=%d\n",c);
	printf("notes of Rs. 10=%d\n",d);
	printf("notes of Rs. 5=%d\n",e);
	printf("notes of Rs. 2=%d\n",f);
	printf("coin of Re. 1=%d",g);
	
	return 0;
	
}

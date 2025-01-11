#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int p,t;
	float r,a=0,ci=0;
	printf("calculation of compound interest\n\n");
	printf("principle=");
	scanf("%d",&p);
	printf("number of year=");
	scanf("%d",&t);
	printf("rate=");
	scanf("%f",&r);
	
    a=p*pow((1+r/100),t);
    
    ci=a-p;
    
	printf("total compound interest=%f",ci);
 	return 0;
	
	
	
}

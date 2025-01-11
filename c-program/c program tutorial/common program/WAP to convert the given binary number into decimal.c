//WAP to convert the given binary number into decimal
#include<stdio.h>
#include<conio.h>

int main()
{
	int bin,dec=0,rem,base=1;
	
	printf("enter binary number :");
	scanf("%d",&bin);
	
	while(bin>0)
	{
		rem=bin%10;
		dec=dec+(rem*base);
		base*=2;
		bin/=10;
		
	}
	printf("\ndecimal number =%d",dec);
	
	
	
}

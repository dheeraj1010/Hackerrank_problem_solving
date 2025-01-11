#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int prin,year;
	float rate,si=0;
	printf("calculation of simple interest\n");
	printf("principle=");
	scanf("%d",&prin);
	printf("year=");
	scanf("%d",&year);
	printf("rate per year=");
	scanf("%f",&rate);
	
	/*formula of simple interest*/
	
	si=prin*year*rate/100;
	printf("calculated simple interest=%f",si);
	return 0;
	
	
}

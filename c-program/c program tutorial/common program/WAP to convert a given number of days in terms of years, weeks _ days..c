//WAP to convert a given number of days in terms of years, weeks & days.
#include<conio.h>
#include<stdio.h>

void main()
{
	int day,year,weeks;
	printf("enter  no of day :");
	scanf("%d",&day);
	
	year=day/365;
	day=day%365;
	weeks=day/7;
	day=day%7;
	
	printf("\n %d year , %d WEEKS , %d days ",year,weeks,day);
	
	
}

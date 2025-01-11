/********************************************************************************************
 A machine is purchased which will produce earning of rs . 1000 per year while it lasts .
 %The mac hine costs rs. 6000 and will have a salvage vlaue of Rs. 2000 when it is condemned .
 if 9 percent per annum can be earned on alternate investments, write a program to determine what will be the 
 minimum life of thge machine to make it a more attractive investment compared to alternative investment ? */
#include<stdio.h>
#include<conio.h>
int main()
{
	int  t=1,profit_a,profit_b;

for(t=1;;t++)
{
	
	profit_a=t*1000-4000;
	
	profit_b=(t*9*60);
	if(profit_a>profit_b)
	{
		printf("  minimum life of machime  = %d  year",t);
		break;
	}

	}
	getch ();
	return 0;
}

	


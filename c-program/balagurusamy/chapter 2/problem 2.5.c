/* The price of one kg of rice is Rs 16.75 and one kg of sugar is Rs.15 .
Write a program to get these values from the user and dispaly the prices as follows :
***LIST OF ITEMS***
item      price 
rice      Rs. 16.75
sugar     Rs. 15.00*/
#include<stdio.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	float rice,sugar,p_rice,p_sugar;
	printf("enter the no of kg of rice =");
	scanf("%f",&rice);
	printf("enter the no of kg of sugar=");
	scanf("%f",&sugar);
	p_rice=rice*16.75;
	p_sugar=15.00*sugar;
	printf("\nitem       price ");
	printf("\nrice     16.75*%d =%.2f",rice,p_rice);
	printf("\nsugar     15.00*%d=%.2f",sugar,p_sugar);
	getch ();
	return 0;
	
}

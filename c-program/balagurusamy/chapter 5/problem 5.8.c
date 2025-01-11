#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int purchase;
	char answer;
	float net,discount;
		printf("enter m for mill cloth and h for handloom cloth =");
     scanf("%c",&answer);
	printf("enter the purchase amount =");
	scanf("%d",&purchase);

	
	if(answer=='m'||answer=='M')
	{
		if(purchase<=100)
		{
			discount=0.0;
		}
		else if(purchase<=200&&purchase>=101)
		{
			discount=0.05;
		}
		else if(purchase<=300&&purchase>=201)
		{
			discount=0.075;
		}
		else
		discount=0.1;

	}
	
		if(answer=='h'||answer=='H')
	{
		if(purchase<=100)
		{
			discount=0.5;
		}
		else if(purchase<=200&&purchase>=101)
		{
			discount=0.075;
		}
		else if(purchase<=300&&purchase>=201)
		{
			discount=0.1;
		}
		else
		discount=0.15;

	}
	
	net=purchase-purchase*discount;
	printf("\nnet amount to be paid = %.2f",net);
	
	getch();
}

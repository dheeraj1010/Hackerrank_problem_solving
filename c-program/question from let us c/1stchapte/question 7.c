/*if the total selling price of 15 items and the totalprofit earnedon themisinputthrough the keyboard ,write a program
to find  the cost price of one item.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{
	int sel;
	printf("please enter the selling price of 15 items \n = ");
	scanf("%d",&sel);
	printf(" rupees\n\n");
	
	int pro;
	 
	printf("please enter the profit earned on 15 items\n = ");
	scanf("%d",&pro);
	printf("  rupees\n\n");
	
	int cost;
	cost=sel-pro;
	printf("cost price of product is %d rupees\n\n        thanks\n\n\nname-dheeraj kumar\nrollno-1704038\nbranch-eletronics and communication engineering");
	
	getch();
	
}

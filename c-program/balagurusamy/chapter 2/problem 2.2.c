//take input in rupees and give output in paise
#include<stdio.h>
#include<conio.h>
int main()
{
	float rupees;
	int paise;
	printf("to convert from rupees to paise\n\n");
	printf("enter the price of product =");
	scanf("%f",&rupees);
	paise=rupees*100;
	printf("\nprice of product is %d paise\n",paise);
	getch ();
	return 0;
}

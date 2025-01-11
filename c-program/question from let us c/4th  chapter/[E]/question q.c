/* if loan amount , number of months and rate of interest are 
entered through the kryboard , write a program to calculate the monthly installment 
(including contribution towards principle and intrest  ) for each month of loan duration */
#include<stdio.h>
#include<conio.h>
int main()
{
int nom,ri,count;
float la,ins,paid,ext;
	printf("enter the loan amount = ");
	scanf("%f",&la);
	printf("enter the number of months = ");
	scanf("%d",&nom);
	printf("enter the rate of interest in per year in percent  = ");
	scanf("%d",&ri);
	printf("\n");
	ins=la/nom;
	
	for(count=1;count<=nom;count++)
      {
    
      printf("  %d month istallment  = %5.2f\n",count,ins+ext);
      paid+=ins;
      ext=(la-paid)*ri/1200;
    
	  }

getch ();
return 0;
}

#include<stdio.h>
#include<conio.h>

int test(int *);
void positive_negative_test(int *);

void odd_even_test(int *);

main()
{
	int n[25],i;
	printf("enter 25 number :\n");
	for(i=0;i<25;i++)
	{
		scanf("%d",&n[i]);
	}
	
	test(n);
	
	getch ();
}

int test(int *n)
{
	positive_negative_test(n);
	odd_even_test(n);
}

void positive_negative_test(int *n)
{
	int p=0,neg=0,zero=0,i;
	for(i=0;i<25;i++)
	{
		if(n[i]>0)
		p++;
		
		else if(n[i]<0)
		neg++;
		
		else
		zero++;
	}
	
	printf("\npositive = %d, negative =%d , zero =%d\n\n",p,neg,zero);
}

 void odd_even_test(int *n)
 {
 	int odd=0,even=0,i;
 	for(i=0;i<25;i++)
 	{
 		if(n[i]%2==0||n[i]%4==0||n[i]%6==0||n[i]%8==0)
 		even++;
 		else
 		odd++;
 		
	 }
	 printf("\n total even number =%d ,total odd number = %d ",even,odd);
	 
 }
 
 
 
 

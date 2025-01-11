/* The cost of one type of mobile service is Rs. 250 plus Rs. 1.25 for each call made over and above 
100 calls . write a prgram to rtead custmer codes and calls and printf the bill for each customer .*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int calls,ans=1;
	char a='y';
	
	while(ans==1)
	{
		printf("enter the number of calls you made = ");
		scanf("%d",&calls);
		float charge=250+(calls>100?((calls-100)*1.25):0);
		printf("\ncharge for your calls is =%.2f\n",charge);
		printf("do you want to check more customers charges(1 or 0) = ");
		scanf("%d",&ans);
			
	}

	
	getch ();
	return 0;
	
	
}

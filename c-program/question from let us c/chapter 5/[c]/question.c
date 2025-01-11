#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a,b,c;
	
    for(a=1;;a++)
	{
			printf("\n_________________________________________________________\n");
	printf("  1. factorial of a number \n");
	printf("  2.  Prime or not  \n");
	printf("  3.Odd or even \n");
	printf("  4.Exit");
	printf("\n  Enter any number to choose option =   ");
	scanf("%d",&b);
	
	switch(b)
	{
		case 1:
			{
			int n,fac=1,i;
				printf("to find factorial of any number \n\n");
				printf("enter any number to find factorial of a number =");
				scanf("%d",&n);
				for(i=1;i<=n;i++)
				{
					fac=fac*i;
					
				}
				printf("factorail of %d is = %d ",n,fac);
			}
			break;
			
			case 2:
				{
					int p,q;
					printf("to check number entered by user is prime or not \n\n");
					printf("enter any number to check number is prime or not = ");
					scanf("%d",&p);
					if(p==1||p==2)
					{
						printf("\n\n %d is not a prime number",p);
			     }
			     
			     else
			     {
			     	
			     	for(q=2;q<p;q++)
			     	{
			     		
			     		if(p%q==0)
			     		{
			     			printf("\n\n%d is not a prime number ",p);
			     			break;
						 }
						 
					 }
					 printf(" \n\n%d is a prime number ",p);
				 }
				}
				break;
				case 3:
					{
						int m,x;
						printf("to check number entred by user is odd or even\n\n ");
						printf(" enter any number = ");
						scanf("%d",&m);
					x=m%2;
						if(x==0)
						{
							printf(" \n %d is  a even number \n",m);
							
						}
						else 
						printf(" \n %d is odd number \n",m);
						
						
					}
					break;
					case 4:
						{
						break;
						}
	}
		}
		getch ();
		return 0;	
}

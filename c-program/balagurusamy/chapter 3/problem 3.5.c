#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n;
	printf("enter any integer number = ");
	scanf("%d",&n);
	
	int x=n,count=0;
	while(x>10)
	
	{
		 
	x=x/10;
	count++;
	}
		
	int thousand,i,digit,y;
	thousand=pow(10,count);




	
while(thousand>0)
	{
		i=thousand;
		y=n;
	      while(i>0)
	        {
	        	
	        	digit=y/i;
	        	printf(" %d ",digit);
	        	y=y%i;
	        	i/=10;
			}
			printf("\n");
			n=n%thousand;
			
			thousand=thousand/10;
		}
		
		
getch ();	
}

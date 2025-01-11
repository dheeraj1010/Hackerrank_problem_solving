/* write a program to print all prime numbers from 1 to 300.
(hint ; use nested loops ,break and continue ) */
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,x=0;
	printf("prime number from 1 to 300\n\n");
	printf("         2  \n");
	
	for(a=3;a<=300;a++)
	{
		for(b=2;b<a;b++)
		{
			if(a%b==0)
			{
				x=1;
			break;
	     	}
		}
		
			 
		if(x==0)
		{
			printf("    %d   \n",a);
			
	}
	x=0;
	
		
	
	}
	
	getch ();
	return 0;
}

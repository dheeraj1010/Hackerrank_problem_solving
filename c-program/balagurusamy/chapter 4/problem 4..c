/* Write an interactive program to demonstarte the process of multiplication . the  program should
ask the user to enter two two-digit integer an dprint the product of inmtegers as shown .

                       45
			     *     37
				 ---------------
			7*45 is   315
			3*45  is   135
			------------------
			add them 1665
			----------------*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
void main()
{
	int n_1,n_2;
	printf("enter two digit number =");
	scanf("%d",&n_1);
	printf("enter tgwo digit number =");
	scanf("%d",&n_2);
	
	printf("\n                 %d",n_1);
	printf("\n         *       %d",n_2);
	printf("\n           _______________________");
	int x=n_2%10,y=n_2/10;
	printf("\n %d*%d    is      %d",x,n_1,x*n_1);
	printf("\n %d*%d    is      %d",y,n_1,y*n_1);
	printf("\n            _________________________");
	printf("\n Add them        %d",n_1*n_2);
	
	getch ();
						}					    

/* write a program that determines weather a given integer is odd or even and dispalys the number 
and description on the same line */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n;
	printf("to check the number is odd even\n\n ");
	printf("enter an integer =");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d is an even number \n",n);
		
	}
	else 
	printf("%d is an odd number \n",n);
	getch ();
	
}

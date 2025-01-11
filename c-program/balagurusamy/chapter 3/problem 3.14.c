/* Write a program to read two integer values m and n and decide and print weather m is a multiple of n*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n1,n2;
	printf("Write a program to read two integer values m and n and decide and print weather m is a multiple of n\n\n");
	printf("enter first integer  =");
	scanf("%d",&n1);
	printf("enter second integer =");
	scanf("%d",&n2);
	
	if(n1%n2==0)
	{
		printf("\n%d is divisible by %d ",n1,n2);
	}
	else if(n2%n2==0)
	{
		printf("\n%d is divisible %d ",n2,n2);
		
	}
	
	else
	printf("%d ,%d  are not multiple of each other",n1,n2);
	
	getch ();
	return 0;
	
}

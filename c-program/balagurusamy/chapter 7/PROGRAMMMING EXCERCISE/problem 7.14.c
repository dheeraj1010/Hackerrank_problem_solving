#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	long int n,check,copy;

	printf("enter ISBN(international standard book number )  = ");
	scanf("%ld",&n);
		check=n%10;
		copy=n;
	int i,digit,sum;
	for(i=1;i<=9;i++)
	{
		digit=n%10;
		n=n/10;
		sum=sum+i*digit;
	}
	
	if(sum%11==check)
	printf("\n%ld  is valid ISBN number ",copy);
	else
	printf("\n%ld is not valid number ",copy);
	
	getch ();
}

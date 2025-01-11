//reverse of a number using while loop
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,number,rem,k;
	printf("reverse of a number \n");
	printf("enter a number =");
	scanf("%d",&n);
	k=n;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		number=number*10+rem;
		
	}
	printf("\n\nreverse of number %d is %d ",k,number);
	getch ();
;
}

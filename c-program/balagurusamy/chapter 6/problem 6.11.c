// decimal to binary
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n,k,i,rem,base=1;
	long int binary=0;
	printf("enter a number =");
	scanf("%d",&n);
	k=n;
	
	while(n>0)
	{
		rem=n%2;
		n=n/2;
		binary=binary+rem*base;
base=base*10;	
	}

	
	printf("\nbinary of %d is %ld",k,binary);
	getch ();
}

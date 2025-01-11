#include<stdio.h>
#include<conio.h>
void main()
{
	// decimal to binary
	int n,binary,base=1,rem;
	printf("enter a  number =");
	scanf("%d",&n);
	int k=n;
	while(n>0)
	{
		rem=n%2;
		binary=binary+rem*base;
		base=base*10;
		n=n/2;
		
	}
	printf("binary of %d is %d ",k,binary);
	getch ();
	
	
}

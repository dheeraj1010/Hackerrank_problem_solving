//to print even numbers from 1 to 100
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	
	printf("even numbers from 1 to 100\n");
	for(n=1;n<=100;n++)
	{
		if(n%2==0)
		printf(" %d ",n);
		
	}
	getch ();
	return 0;
}

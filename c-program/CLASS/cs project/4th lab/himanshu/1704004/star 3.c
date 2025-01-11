#include<stdio.h>
#include<conio.h>
int main()
{
	int space=0,i,j,k;
	printf("Name-Himanshu Chaudhary\nRoll-1704004\n");
	for(i=4;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{printf("*");
		}
		printf("\n");
	    space++;
		for(k=0; k<space;k++)
		printf(" ");
	}
	getch();
}


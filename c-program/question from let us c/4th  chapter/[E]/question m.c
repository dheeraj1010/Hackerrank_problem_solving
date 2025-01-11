/*  Write a program to generate all pythogorean triplets with side length less than or equal to 30*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("pythogorean triplets\n\n");
	
	for(a=1;a<=30;a++)
	{
		for(b=1;b<=30;b++)
		{
			for(c=1;c<=30;c++)
			{
				if(a*a+b*b==c*c)
				{
					printf(" %d*%d +%d*%d = %d*%d\n ",a,a,b,b,c,c);
				}
			else
			continue;
			}
		}
	}
	getch ();
	return 0;
}

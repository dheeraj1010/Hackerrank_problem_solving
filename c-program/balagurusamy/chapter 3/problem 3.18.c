/* Write a program to compute the values of squrae -roots and  square of the numbers 0 to 100
in steps 10 and print the output in a tabular form as shown below */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void  main()
{
	int i;
	printf("  Number                 square-root                      square\n");
	for(i=1;i<=100;i++)
	{
		float n=sqrt(i);
		int m=i*i;
    printf("   %d                     %.3f                                 %d     \n",i,n,m);
		
}

getch ();
}


/***********************
Write a program to generate all 
combination of 1,2,3 using for loop*/
#include<stdio.h>
#include<conio.h>
int main()
{
	 int a,b,c,count=1;
	 for(a=1;a<=3;a++)
	 {
	 	for(b=1;b<=3;b++)
	 	{
	 		for(c=1;c<=3;c++)
	 		{
	 	
	 				printf("%d   %d%d%d\n",count,a,b,c);
	 				count++;
		
	 			
			 }
		 }
	 }
	 getch ();
	 return 0;
}


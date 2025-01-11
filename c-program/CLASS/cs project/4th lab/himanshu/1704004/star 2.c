#include<stdio.h>
#include<conio.h>
int main()
{
	int space=4,star=0,i,j;
	printf("Name-Himanshu Chaudhary\nRoll-1704004\n");
	for(j=1;j<=4;j++)
 	{
		for(i=space;i>=1;i--)
     	{
		 
    	 printf(" ");
     	}
     	
 	    for(i=4;i>=space;i--)
	     { 
	     printf("*");
         }
  	        space--; 
	     for(i=1;i<=star;i++)
	     {
	     	printf("*");
  	     }
	   printf("\n");
	   star++;
    }
    getch();
}

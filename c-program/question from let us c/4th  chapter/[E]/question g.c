#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,n=71;
	
	for(a=65;a<=n;a++,n--)
	{
       if(a<71)
       {
       	printf("   %c   ",a);
       	continue;
	   }
	   else
	   {
	   	for(a=71;a>=64;a--)
	   	{
	   		if(a>=65)
	   		{	   
	   		printf("   %c   ",a);
	         }
	         else
	         {
	         	printf("\n");
	      
			 }
	         
		   }
	   }
	}
	getch ();
	return 0;
	
}

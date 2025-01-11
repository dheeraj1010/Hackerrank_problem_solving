#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
          if(i %2!=0)
          {
          	if(j%2!=0)
          	 {
          		k=1;
			  }
			  else
			  k=0;
		  }
		  else
		  {
		  	if(j%2!=0)
		  	{
		  		k=0;
			  }
			  else
			  k=1;
		  }
			printf("%d  ",k);
		}
		printf("\n");
	}
}

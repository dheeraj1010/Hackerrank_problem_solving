#include<stdio.h>
#include<conio.h>
#include<math.h>
void check(int [10][10]);
void main()
{
	int sudoku[10][10];
	int i,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			printf("enter %dth row and %d th column element =",i+1,j+1);
			scanf("%d",&sudoku[i][j]);
			
		}
	}
	printf("\n");
int ans=check(sudoku);
	if(ans==1)
	printf("sudoku is correct \n");
	else
	printf("sudoku is not correct\n");
	
	getch ();
	
}

void check(int sud[10][])
{
	int i,j,sum=0;
	
	//row correction
	for(i=0;i<9;i++)
	{
			sum=0;

		for(j=0;j<9;j++)
		{
			sum=sum+sud[i][j];
		}
		
		if(sum!=45)
		return 0;
		
		
	}
	
	//column test
	for(i=0;i<9;i++)
	{
		sum=0;
		for(j=0;j<9;j++)
		{
			sum=sum+sud[j][i];
		}
		if(sum!=45)
		return 0;
		
		
	}
	int k;
	//block test
	for(k=3;k<9;k+=3)
    {
    	sum=0;
     	for(;i<k;i++)
	   {
	     	for(j=0;j<3;j++)
		   {
		    	sum=sum+sud[i][j];
		   }
	   }
	   if(sum!=45)
	   return 0;
    }
	
}




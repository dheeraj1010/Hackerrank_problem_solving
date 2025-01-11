
#include<stdio.h>
#include<conio.h>

int main()
{
	int mat[4][4],trans[4][4];
  printf("enter elements of 4*4 matrix :\n");
  
  int i,j;
  for(i=0;i<4;i++)
  {
  	for(j=0;j<4;j++)
  	{
  		scanf("%d",&mat[i][j]);
	  }
  }
  
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
		trans[j][i]=mat[i][j];
		
	}
}

for(i=0;i<4;i++)
{
	printf("\n");
	for(j=0;j<4;j++)
	{
		printf("  %d",trans[i][j]);
	}
}

getch ();
}

#include<stdio.h>
#include<conio.h>

main()
{
 int n[5][5],largest,i,j;
 
 printf("enter elements of 5*5 matrix :\n");
 
 for(i=0;i<5;i++)
 {
 	for(j=0;j<5;j++)
 	{
 		scanf("%d",&n[i][j]);
	 }
	 }	
	 
largest=n[0][0];
 for(i=0;i<5;i++)
 {
 	for(j=0;j<5;j++)
 	{
 	 if(largest<n[i][j])
 	 {
 	 	largest=n[i][j];
 	 	
	  }
	 }
	 }	
	 
	 printf("\nlargest =%d ",largest);
	 
	 getch ();
}

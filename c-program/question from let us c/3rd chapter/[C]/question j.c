/* given three points (x1,y1) , (x2,y2) and (x3,y3) ,write a program to
check if all the three points fall on one straight line */

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{
	 int x1,x2,y1,y2,x3,y3,sum;
	 printf(" TO CHECK THE THREE COLLINEAR POINT");
	 
	 printf("\nenter value of x1 =");
	 scanf("%d",&x1);
	  printf("enter value of y1 =");
	 scanf("%d",&y1);
	 
	  printf("\nenter value of x2 =");
	 scanf("%d",&x2);
       printf("enter value of y2 =");
	 scanf("%d",&y2);
	 
	   printf("\nenter value of x3 =");
	 scanf("%d",&x3);
	   printf("enter value of y3 =");
	 scanf("%d",&y3);
	 
	 sum=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
	 
	 printf("\n                   %d\n",sum);
	 if(sum==0)
	 {
	 	printf("all three point on the straight line");
	 	
	 }
	 else
	 printf("all three points are not on a straight line");
	 
	 return 0;
}

/* A set of two linear equations with two unknows x1 and x2 is given below :
ax1 + bx2 =m
cx1 + dx2 =n
the set has a uniques solution x1=(md-bn)/(ad-cb)   x2=(na-mc)/(ad-cb)   
provide the denominator ad-cb is not equal to zero.
write a progrma that will read the values of constants a,b,c,d,m and n and compute the 
values of x1 and x2 . An appropriate messege should be printed if ad-cb=0*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
void main()
{
	int a,b,c,d,m,x1,x2,n;
	printf("if ax1 + bx2 = m,  cx1 + dx2 =n\n");
	printf("to find the valus of x1,and x2 \n");
	printf("enter value of a=");
	scanf("%d",&a);
		printf("enter value of b=");
	scanf("%d",&b);
		printf("enter value of c=");
	scanf("%d",&c);
		printf("enter value of d=");
	scanf("%d",&d);
		printf("enter value of m=");
	scanf("%d",&m);
		printf("enter value of n=");
	scanf("%d",&n);
	if((a*d-c*b)!=0)
	{
	
	
	 x1=(m*d-b*n)/(a*d-c*b);
	    x2=(n*a-m*c)/(a*d-c*b);
		
		printf("\nthe value of x1=%d and x2=%d ",x1,x2);
}
else
printf("\nad-cb=0");

		getch ();
		  
	
}

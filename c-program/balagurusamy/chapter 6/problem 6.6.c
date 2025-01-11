#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float p,r,t,n,v;

// to caclculate various combination of compond intrest
printf("to calculate various combination of compound intrest\n");

for(p=1000;p<=10000;p+=1000)
 {
 printf("if P=%4.f",p);
     for(r=0.1;r<=0.20;r+=0.01)
      { 
printf("and r=%.2f\n",r);
         for(n=1;n<=10;n++)
         {
         v=p*pow((1+r),n);
	           printf("after %.f year v=%.2f\n",n,v);
         }
      } 
    printf("\n\n");
 } 
 getch ();
}

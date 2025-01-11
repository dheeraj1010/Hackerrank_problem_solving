/* e. A five -digitnumberisentered through the keyboard .write a program to obtain the 
reversed number and to determine weatherthe original and reversed numbers are equal or  not*/
#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	
printf("to obtain revrse of five digit number \n");
int n,a,b,c,d,e,f,g,h,x;
printf("enter any five digit number = ");
scanf("%d",&n);

a=n/10000;
b=n%10000; c=b/1000;

d=n%1000; e=d/100;

f=n/100; g=f/10;
h=n%10;


x=a*10000+c*1000+e*100+g*10+h;
printf("\n\nreverse of %d is %d ",n,x);

if(x==n)
printf("\n number entered by you is same to its reverse number \n\n");
else
printf("\n number entered by you is same to its reverse number\n\n");

return 0;
}

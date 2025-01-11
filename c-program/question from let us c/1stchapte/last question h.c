/*paperof size A0 has dimensions 1189mm*841mm.each subsequent size A(n) 
is defined as A(n-1) cut in half parallel to its shorter sides.
write a  program to calculate and print paper size  A0, A1 ,A2,...........A8.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()

{
int a,b;	
a=1189,b=841;
printf("following is the paper of diiferent size\n\n ");
printf("size of paper A1 is %d mm * %d mm\n\n",a,b);
printf("size of paper A2 is %d mm * %d mm\n\n",a/2,b/2);
printf("size of paper A3 is %d mm * %d mm\n\n",a/4,b/4);
printf("size of paper A4 is %d mm * %d mm\n\n",a/8,b/8);
printf("size of paper A5 is %d mm * %d mm\n\n",a/16,b/16);
printf("size of paper A6 is %d mm * %d mm\n\n",a/32,b/32);
printf("size of paper A7 is %d mm * %d mm\n\n",a/64,b/64);
printf("size of paper A8 is %d mm * %d mm\n\n",a/128,b/128);

printf("..........................thank you................................... ");
 getch();
 

}

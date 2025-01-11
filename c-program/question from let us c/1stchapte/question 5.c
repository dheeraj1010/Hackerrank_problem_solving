/* the length and breath of a rectangle and radius of a circle are input through the keyboard .
write  a program to calculte the area & circumference of the circle .*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{
int len,brd,rad,arr;
float arc;

printf("please entre length of rectangle =   ");
scanf("%d",&len);
printf("metre\n\n");

printf("please entre breath of rectangle=    ");
scanf("%d",&brd);
printf("metre\n\n");

arr=len*brd;
printf("area of rectangle = %d metre square\n\n",arr);

printf("please entre radius of circle =");
 scanf("%d",&rad);
 printf(" metre\n\n");
 
  arc=3.14*rad*rad;
  printf("area of circle = %f metre square\n\n\n\n\n",arc);
  printf("            thanks \n\n\n\n\nname-dheeraj kumar\nroll no-1704038\nbranch ece");
  
  getch();
  
}

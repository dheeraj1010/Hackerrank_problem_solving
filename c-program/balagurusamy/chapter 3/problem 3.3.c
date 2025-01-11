/* Modify the above program to display the two right most digit of the integral part of the number .
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float a;
	printf(" Modify the above program to display the two right most digit of the integral part of the number \n\n");
      printf("enter the any floating point number =");
      scanf("%f",&a);
      int b,last_2digit;
         
		 b=a;
		 last_2digit=b%100;
		 printf("\n\nlast two digit of integral number you have entered is %d",last_2digit);
		 getch ();
          
}

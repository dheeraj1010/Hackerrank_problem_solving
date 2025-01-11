/* Write a program that will read a real number from keyboard and print the following output in
one line : smaleest integer     the given       largest integer
          not less than           number         not graeter than
           the number                            the number */
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 	float n;
 	printf("enter any floating point number = ");
 	scanf("%f",&n);
 	int a;
 	a=n;
 	printf("\n\n%d        %f          %d   ",a+1,n,a-1);
 	getch ();
 	
 	
 }

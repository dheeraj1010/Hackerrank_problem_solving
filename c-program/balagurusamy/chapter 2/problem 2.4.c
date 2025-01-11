/* write a program that requests two float type numbers from the user and 
then divides  the first number by the second and display the results along 
with the numbers .*/
#include<stdio.h>
#include<conio.h>
int main()
{
	float n1,n2;
	float div;
	printf("divsion of two numbers\n\n");
	printf("enter the number1 =");
	scanf("%f",&n1);
	printf("enter number two =");
	scanf("%f",&n2);
	div=n1/n2;
	printf(" %.f/%.f = %f",n1,n2,div);
	getch ();
	return 0;
}

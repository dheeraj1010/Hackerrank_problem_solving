#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{
 int n,a;
	printf("QUESTION-if a five digit number input through the keyboard , write a program to print a\n");
	printf(" new number by adding one topeach of its digits . for example , if the number\n");
	printf(" that is input is 12391, then the ouput should be displayed as 23502\n\n");
	
	printf("please enter a five digit any number \n");
	
	scanf("%d",&n);
	a=n+11111;
	
	printf("new number = %d",a);
	
	
return 0;
}

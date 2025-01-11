/* Write a program to read three values using scanf statement and print the following results :
(a). sum of the vlaues
(b). average of the three values 
(c). largest of the three
(d).  Smallest of the three */
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int n1,n2,n3;
	printf("enter first number =");
	scanf("%d",&n1);
	printf("enter 2nd number =");
	scanf("%d",&n2);
	printf("enter 3rd number =");
	scanf("%d",&n3);
	
	int sum=n1+n2+n3;
	float average=(float)sum/3;
	int largest=(n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3));
	int smallest=(n1<n2?(n1<n3?n1:n3):(n2<n3?n2:n3));
	printf("\n\n");
	printf("sum of three numbers is = %d",sum);
	printf("\naverage of three numbers is = %f",average);
	printf("\nlargest number among three is %d",largest);
	printf("\nsmallest number among three is %d",smallest);
	
	getch ();
	return 0;
	
}

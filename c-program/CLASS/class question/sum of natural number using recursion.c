#include<stdio.h>
#include<conio.h>

int sum(int );
 
 main()
 {
 	int n;
 	printf("enter a number to sum up to n natural number = ");
 	scanf("%d",&n);
 	
 	printf("sum of %d natural number =%d ",n,sum(n));
 	
 	getch ();
 }
 
 int sum(int n)
 {
 	if(n==1)
 	return 1;
 	else 
 	return (n+sum(n-1));
 	
 }

#include<stdio.h>
 
 int main()
 {
 	int a,b,c;
 	printf("to check weather the dimensions of triangle is correct or not\n\n");
 	printf("enter length of side a= ");
 	scanf("%d",&a);
 	
 	printf("enter length of side b= ");
 	scanf("%d",&b);
 	
 	printf("enter length of side c= ");
 	scanf("%d",&c);
 	
 	if((a+b)>c&&(b+c)>a&&(c+a)>b)
 	printf("dimensions of triangle is correct\n triangle is valid\n\n");
 	else
 	printf("triangle have no valid dimesnsions ");
 	return 0;
 	
 }

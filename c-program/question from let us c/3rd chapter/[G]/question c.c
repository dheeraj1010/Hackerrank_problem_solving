#include<stdio.h>
int main()
{
	float h,c,t;
	printf("to check the grade of steel \n");
	printf("\nenter the hardness of steel =");
	scanf("%f",&h);
	
	printf("enter the carbon content in the steel =");
	scanf("%f",&c);
	
	printf("enter the tensile strength of steel =");
	scanf("%f",&t);
	
	//garade 10 condition
	if(h>50&&c<0.7&&t>5600)
	printf(" \nthe grade steel is 10");
	//grade 9 condition
	else if(h>50&&c<0.7)
	printf("\n the grade of steel is 9");
	//garde 8 steel condition
	else if(c<0.7&&t>5600)
	printf("\nthe grade of steel is 8");
	//grade 7 steel condition
	else if(h>50&&t>5600)
	printf("\nthe grade of steel is 7");
	//garde 6 steel condition
	else if(h>50||c<0.7||t>5600)
	printf("\n the grade of steel is 6");
	//garde 5 steel condition
	else if(!(h>50&&c<0.7&&t>5600))
	printf("\ngarde of stell is 5");
	return 0;
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
void main()
{
	float x[10],y[10];
	int i,j;
	printf("enter the values  x and y two times \n\n");
	for(i=1;i<10;i++)
	{
	
	printf("enter the values of x= ");
	scanf("%f",&x[i]);
	
}
for(j=1;j<10;j++)
{
	printf("enter the values of y=");
	scanf("%f",&y[j]);
}

printf("\n\n");
int k;
for(k=1;k<=10;k++)
{


float a=(x[k-1]+y[k-1])/(x[k-1]-y[k-1]); 
printf("for x=%.2f  , y=%.2f the value of (x+y)/(x-y) = %.2f\n",x[k-1],y[k-1],a);

}
getch ();
}

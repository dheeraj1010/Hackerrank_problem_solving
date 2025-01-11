#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a;
	printf("To determine efficiency of the worker\n\n");
	printf("enter time taken by the worker to complete the work =");
	scanf("%d",&a);
	
	if(a<=3&&a>=2)
	printf("\n\nthe worker to be high effecient");
	
	else if(a>3&&a<=4)
	printf("\n\nworker should improve their speed");
	
	else if(a>4&&a<=5)
	printf("\n\nworker is given training to improve their work");
	
	else if(a>5)
	
	printf("\n\nThe worker is terminated");
	
	return 0;
	
}

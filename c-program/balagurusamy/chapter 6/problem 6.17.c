#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int degree;
double  sine,rad;
	
	
	for(degree=0;degree<=180;degree+=15)
	{
		rad=(3.14/180)*degree;
		sine=sin(rad);
		
		printf("at sin(%d) = %f \n",degree,sine);
	}
	getch ();
}

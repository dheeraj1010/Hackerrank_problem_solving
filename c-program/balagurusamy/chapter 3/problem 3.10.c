#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float r,l,c,f;
	printf("study of RLC circuit \n\n");
	printf("enter the value of L =");
	scanf("%f",&l);
	printf("enter the value R = ");
	scanf("%f",&r);
	
	printf("\n\n");
	for(c=0.01;c<=0.1;c+=0.01)
	{
		f=sqrt((1/(l*c))-((r*r)/(4*c*c)));
		printf("frequency =%.3f  at L=%.f    R=%.f    C=%.2f\n",f,l,r,c);
		
	}
	getch();
}

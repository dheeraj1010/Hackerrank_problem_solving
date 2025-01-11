#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int d_r,s_c,h_c;
	printf("enter the value of setup cost =");
	scanf("%d",&s_c);
	printf("enter the value of demand rate =");
	scanf("%d",&d_r);
	printf("enter the value of holding cost per unit time =");
	scanf("%d",&h_c);
	
	float eoq,tbo;
	eoq=sqrt((2*d_r*s_c)/(float)(h_c));
	tbo=sqrt((2*s_c)/(float)(d_r*h_c));
	printf("\n\nEOQ=%.2f       TBO= %.2f",eoq,tbo);
	
	getch ();
	
}

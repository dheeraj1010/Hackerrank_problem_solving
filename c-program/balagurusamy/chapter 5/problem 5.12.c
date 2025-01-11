#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int unit;
	float rate;
	printf("enter unit of electricity consume =");
	scanf("%d",&unit);
	
	if(unit<=200)
	rate=0.8;
	else if(unit<=300&&unit>200)
	rate=0.9;
	else 
	rate=1;
	
	float charge=unit*rate;
	
	if(charge<100)
	charge=100;
	else if(charge>400)
	charge=charge+charge*0.15;
	
	printf("\ncharge for your electricity\n");
	printf("charge=%.2f\n",charge);
	
	getch ();
	
}

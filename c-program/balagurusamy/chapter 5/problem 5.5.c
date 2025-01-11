#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int phy,chem,math;

printf("to check eligibility for professional course\n");
printf("enter marks in mathematics=");
scanf("%d",&math);
printf("enter marks in physics =");
scanf("%d",&phy);
printf("enter marks in chemistry =");
scanf("%d",&chem);

if((math>=60&&phy>=50&&chem>=40&&math+phy+chem>=200)||(math+phy>=150))
{
	printf("\neligible for professional course");
	
	}
	else
	printf("\nNot eligible for professional course");
	getch ();
		
}

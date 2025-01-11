#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
void main()
{
	char na[5],nb[5],nc[5];
	printf("enter first name =");
	scanf("%s",&na);
	printf("enter middle name =");
	scanf("%s",&nb);
	printf("enter last name =");
	scanf("%s",&nc);
	//first problem
	printf("\n%s %.1s %s",na,nb,nc);
	printf("\n%.1s %.1s %s ",na,nb,nc);
	printf("\n%s %.1s %.1s",nc,na,nb);
	
	getch ();
}

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()

{
	
	float faren,celc=0;
	printf("type the tempreture of the city in farenhite\n");
	scanf("%f",&faren);
	
	celc=(1.8*faren)+32;
	
	printf("tempreture of city =%d celcius",celc);
	
	getch();
}

#include<stdio.h>
#include<conio.h>
int main()
//to convert farenhiet to celcius
{
float f,c;
	printf("Name- Dheeraj kumar\nRoll no-1704038\n");
	printf("enter temp in farenhiet =");
	scanf("%f",&f);
	
	c=(f-32)*5.0/9;
	printf("temp in celcius = %.2f",c);
	getch ();
	return 0;
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int character,i;
	char string[20];
	printf("Name-Dheeraj kumar\nRoll no-1704038\n");
	printf("Enter string =");
	scanf("%s",&string);
	
	for(i=0;string[i]!=0;i++)
	{
		character++;
	}
	printf("\nNumber of character in string is %d",character);
	
	getch ();
}

#include<stdio.h>
#include<conio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char text[100];
	int length=0,i=0;
	printf("enter a line of text :");
	gets(text);
	
	while(text[i]!='\0')
	{
		length++;
		i++;
	}
	printf("\n lenght of text =%d",length);
	getch ();
	
}

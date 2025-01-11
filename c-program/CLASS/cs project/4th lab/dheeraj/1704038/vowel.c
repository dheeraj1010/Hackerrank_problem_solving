#include<stdio.h>
int main()
{
	char b;
	
	printf("Name-dheeraj kumar\nRoll no-1704038\n\n");
	
	printf("enter any character = ");
	scanf("%c",&b);
	switch(b)
	{
	
	case 'a': case'e': case 'i': case 'o': case 'u':	case 'A':	case 'E':	case 'I':	case 'O':	case 'U':
											printf(" \n%c is a vowel",b);
											break ;
											default:
												printf("\n%c is a consonant",b);
											}
												getch ();
												return 0;
}

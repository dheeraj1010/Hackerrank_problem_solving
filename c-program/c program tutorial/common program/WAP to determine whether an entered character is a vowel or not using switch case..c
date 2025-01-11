//WAP to determine whether an entered character is a vowel or not using switch case.
#include<stdio.h>
#include<conio.h>

void main()
{
	char c;
	printf("enter a character :");
	scanf("%c",&c);
	
	switch(c)
	{
		case 'A': case 'E': case 'I': case 'O': case 'U': case 'a': case 'e': case 'i': case 'o': case 'u':
			{
			
			printf("entered character is a vowel ");
			break;
		}
			
			default :
				printf("entered character is not a vowel ");
			
			
				
	}
	
	
}

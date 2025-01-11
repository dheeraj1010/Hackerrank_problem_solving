#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main()
{
	char text[100],search;
	printf("enter a line of text =\n");
	gets(text);
	
	printf("enter a text to search number of occurance =");
	scanf("%c",&search);
	int i=0,occ=0;
	while(text[i]!='\0')
	{
		if(search==text[i])
		occ++;
		i++;
		
		
	}
	printf("\n %c is %d times in '%s'",search,occ,text);
	
	
	
	getch ();
}

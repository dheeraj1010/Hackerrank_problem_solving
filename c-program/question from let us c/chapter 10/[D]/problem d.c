#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[15];
	printf("enter a string of type '1234'\n");
	gets(str);
	
printf("\n number are in string :%s",str);

int l=strlen(str);
int number=0,i;

for(i=0;i<l;i++)
{
	number=number*10+(str[i]-48);
}

printf("\n\nstring as number :%d",number);


	
	
	getch ();
}

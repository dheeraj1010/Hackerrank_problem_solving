#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	struct gospel
	{
		int num;
		char mess1[150];
		char mess2[50];
	}m;
	m.num=1;
	strcpy(m.mess1,"if all that you have is hammer ");
	strcpy(m.mess2,"Everything looks like a nail");
	
	printf("%u %u %u ",&m.num,m.mess1,m.mess2);
	
	getch ();
	return 0;
}

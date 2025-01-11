#include<stdio.h>
#include<conio.h>
#include<string.h>

struct gospel
{
	int num;
	char mess1[150];
	char mess2[50];
	
}m1={2,"if you are driven by success ","make sure that its quality time "};

int main()
{
	struct gospel m2,m3;
	m2=m1;
	m3=m2;
	printf("%d %s %s \n",m1.num,m2.mess1,m3.mess2);
	
	return 0;
	getch ();
	
}

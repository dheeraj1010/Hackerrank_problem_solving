#include<stdio.h>
#include<conio.h>
int main()
{
	
	int k;
	float j=2.0;
	switch(k=j+1)
	{
		case 3:
			printf("trapped \n");
			break;
			default:
				printf("caught \n");
				
	}
	getch ();
	return 0;
}

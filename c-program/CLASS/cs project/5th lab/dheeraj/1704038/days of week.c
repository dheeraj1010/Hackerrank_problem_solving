#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Name-Dheeraj kumar\nRoll no-1704038\n\n");
	printf("enter a number = ");
	scanf("%d",&a);
	printf("\n");
	switch(a)
	{
		case 1:
			printf("  Monday ");
			break;
			
				case 2:
			printf("  Tuesday ");
			break;
			
				case 3:
			printf("  Wednesday ");
			break;
			
				case 4:
			printf("  Thursday ");
			break;
			
				case 5:
			printf("  Friday ");
			break;
			
				case 6:
			printf("  Saturday ");
			break;
			
		case 7:
			printf("  Sunday ");
			
			default :
				break;
			
	}
	getch ();
	return 0;
}

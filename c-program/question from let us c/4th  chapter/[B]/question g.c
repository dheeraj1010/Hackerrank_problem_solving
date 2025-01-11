#include<stdio.h>
#include<conio.h>
int main()
{
	printf("to count positive ,negative, zeros \n\n");
	char another='y';
	int a;
	
	while(another=='y')
	{
		printf("\n\nenter any number =");
		scanf(" %d",&a);
	 if(a>0)
	 {printf("\nyou entered positive integer");
	 
	 }
	 else if(a==0)
	 printf("\nyou entered zero");
	 else 
	 printf("\nyou entered negative integer");
	 fflush(stdin);
	 printf("\n\nyou want to enter more number (y/n)= ");
	 scanf("%c",&another);
	 
	}
	getch ();
	return 0;
}

#include<stdio.h>
#include<conio.h>

struct distance
{
	int initial;
	int final;
};

main()
{
	struct distance position;
	printf("enter initial position of object :");
	scanf("%d",&position.initial);
	printf("enter final position of object :");
	scanf("%d",&position.final);
	
	printf("\n\ndistance = %d",(position.final-position.initial));
	
	getch ();
	
	
	
}

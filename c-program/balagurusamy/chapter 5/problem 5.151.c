#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float x,y;
	char T;
	
printf("to find sin cos and tan of a number \n");
printf("enter s for sin , c for s , t for tan =");
scanf("%c",&T);
printf("\nenter angle x in radian = ");
scanf("%f",&x);


	switch(T)
	{
		case 't': case 'T':
			y=tan(x);
			printf("tan(x)=%.2f",y);
			break;
			case 'c': case 'C':
				y=cos(x);
					printf("cos(x)=%.2f",y);
				break;
				case 'S': case 's':
					y=sin(x);
						printf("sin(x)=%.2f",y);
					break;
					
	}
	getch ();
	
}



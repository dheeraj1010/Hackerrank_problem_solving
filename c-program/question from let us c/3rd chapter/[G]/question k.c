#include<stdio.h>
int main()
{
	int d,m;
	printf("To determine zodiac sign by based on date of birth");
	printf("\n\nplease enter the month you borned (e.g.februrary =2)  =");
	
	scanf("%d",&m);
	printf("enter the date you borned (e.g. 2 january =2)  =");
	scanf("%d",&d);
	printf("\n\n");
	
	
	if((m==12&&d>=22)||(m==1&&d<=19))
	printf("your zodiac sign =capricorn");
	
	
 else if((m==1&&d>=20)||(m==2&&d<=17))
	printf("your zodiac sign =aquarius");
	
	else if((m==2&&d>=18)||(m==3&&d<=19))
	printf("your zodiac sign =pisces");
	
	else if((m==3&&d>=20)||(m==4&&d<=19))
	printf("your zodiac sign = Aries");
	
	else if((m==4&&d>=20)||(m==5&&d<=20))
	printf("your zodiac sign = Turus");
	
	else if((m==5&&d>=21)||(m==6&&d<=20))
	printf("your zodiac sign = Gemini");
	
		else if((m==6&&d>=21)||(m==7&&d<=22))
		printf("your Zodiac sign = Cancer");
		
			else if((m==7&&d>=23)||(m==8&&d<=22))
			printf("your Zodiac sign = Leo ");
			
				else if((m==8&&d>=23)||(m==9&&d<=22))
				printf("your Zodiac sign =Virgo");
				
					else if((m==9&&d>=23)||(m==10&&d<=22))
					printf("your zodiac sign = Libra");
					
						else if((m==10&&d>=23)||(m==11&&d<=22))
						printf("your zodiac sign = Scorpio");
						
							else if((m==11&&d>=22)||(m==12&&d<=21))
							printf("your zodiac sign =Sagittarius");
							
							return 0;
			
}

/* Write a progarm to calculate overtime pay of 10 employees .
Overtiem is paid at the rate of Rs. 12.00 per hour for every hour worked above 40hours.
Assume trhat employees do not work for farctional part of an hour */
#include<stdio.h>
#include<conio.h>
int main()
{
	printf("calculate the overtime pay of 10 employees\n\n");
//wh=working hour , c=count, otp=overtime pay	
	int wh,c,otp;
	
	c=1;
	while(c<=10)
	{
		printf("\n\nenter the time in hour you worked =");
		scanf("%d",&wh);
		otp=(wh-40)*12;
		if(wh<=40)
		printf("\n\nyou have no paid overtime pay");
		else
		printf("\n\nyour overtime pay is %d rupees",otp);
		
		c++;
	}
	
	getch ();
	return 0;
	
}

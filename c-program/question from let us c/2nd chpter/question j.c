/* wind chill factor is the felt air temrature on exposed skin due to wind .the 
wind chill tempreature is always lower than the air temprature ,and is calculated
as per the following formula.
wcf=35.75+0.6215*t+(0.4275*t-35.75)*(pow(v,0.16))
write a program torecieve values of temprature and wind velcity 
and calculate wind chill factor*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	printf("to calculate wind chill factor using wind speed and tempreture\n");
	
	float t,v,wcf;
	
	printf("enter the wind velocity =");
	scanf("%f",&v);
	 printf("enter the temperature =");
	 scanf("%f",&t);
	 
	 wcf=35.75+0.6215*t+(0.4275*t-35.75)*(pow(v,0.16));
	 
	 printf("\n\n the wind chill factor = %f",wcf);
	 
	 return 0;
	 
}

/* the total distance ditance travelled by a vehicle in t seconds is given by   distance =ut +(att)/2  .  Where u is the initial velocity (meteres per second  square ) write  a program to evaluate the distance travelled at regular time intervals of time . given the values of time u and a . the progrma should provide the flexibility to the user to select his intervals and repeat the calculations for different vlaues of u and a */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	printf(" the total distance ditance travelled by a vehicle in t seconds is given by   distance =ut +(att)/2  .  Where u is the initial velocity (meteres per second  square ) write  a program to evaluate the distance travelled at regular time intervals of time . given the values of time u and a . the progrma should provide the flexibility to the user to select his intervals and repeat the calculations for different vlaues of u and a \n\n");
	


	
	
float a,u,t,d;
	printf("enter the time in second =");
scanf("%f",&t);
printf("enter the value of initial speed in m/sec =");
scanf("%f",&u);
printf("enter the value of accelartion  m/ss =");
scanf("%f",&a);

d=u*t+0.5*(a*t*t);
printf("distance travelled by the body is = %.2f metre ",d);	



getch ();

}

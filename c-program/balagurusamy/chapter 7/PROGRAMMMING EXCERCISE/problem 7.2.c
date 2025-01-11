#include<stdio.h>
#include<conio.h>
#include<math.h>
#define DAY 31
#define CITY 10


void main()
{
	
  int temp[DAY][CITY],day,city;

  
  for(day=0;day<DAY;day++)
  {
  	for(city=0;city<CITY;city++)
  	    {
  		printf("enter temp at day %d in city %d =",day+1,city+1);
  		scanf("%d", &temp[day][city]);
	    }
    }	

 
 int high=temp[0][0],low=temp[0][0],day_h,day_l,city_h,city_l;
 
 //for highest temp
 for(day=0;day<DAY;day++)
 {
 	for(city=0;city<CITY;city++)
 	{
 		if(high<temp[day][city])
 		{
 			high=temp[day][city];
 			day_h=day;
 			city_h=city;
 			
 			
		 }
		 
 		
	 }
 }
 
 //for lowest temp
  for(day=0;day<DAY;day++)
 {
 	for(city=0;city<CITY;city++)
 	{
 		if(low>temp[day][city])
 		{
 			low=temp[day][city];
 			day_l=day;
 			city_l=city;
		 }
		 
 		
	 }
}


	 printf("\n\n                        TABLE\n");
	 printf("_______________________________________________________________________________\n");
	 
	 printf("Day     city--------------------->\n");
	 printf("     ");
	 for(city=0;city<CITY;city++)
	 printf("     %d",CITY);
	 printf("\n");
	 
for(day=0;day<DAY;day++)
 {
 	printf(" %d ",day+1);
 	for(city=0;city<CITY;city++)
 	{
 	
 	
		 printf("   %d",temp[day][city]);
	 }
	 printf("\n");
	 
}
	 printf("\n\nhighest temp at day%d in city%d  is %d celcius",day_h+1,city_h+1,high);
	 printf("\nlowest temp at day%d in city%d is %d celcius",day_l+1,city_l+1,low);
	 
	 getch ();
	 
 
 
}

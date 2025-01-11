/* The distance between two cities( in km.) is input  through the keyboard . 
write a program to convert and print this distance in metres, feet ,inches and centimetres.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{
	
	float a,meter=0,feet=0,inches=0;
	//what should enter on the screen 
	
	printf("please enter the distance between the city in km\n");
	printf("after write the distance please enter the'ENTER' button \n");
	printf("so that i will convert it in meter ,feet , inches, \n ");
	printf("and centimeter and show you on your screen\n\n");
	//what store in system sothat use later
	
	
	scanf("%f",&a);

//relation between all variables,meansrelation between kilometer ansd meter ,inches,feet 

	meter=a*1000;
	feet=a*3280;
	inches=a*39370;
	
	//what show on screen 
	 
	 //meter willshowon screen after convert
	 printf("distance between two cities =%f",meter);
	 printf("   meter\n\n");
	 
	 //feet willshow on screen after converting from kilometre
	 printf("distance between two cities =%f",feet);
	 printf("  feet\n\n");
	 
	 //inches will show on screen after convert from kilonmetre to inches
	 printf("distance between two cities =%f",inches);
	 
	 
	 printf("  inches\n\n\n\n");
	 printf("thanks for using my program,iwillhappy to help you");
	 
	 
	  getch ();
	  
	
	

}

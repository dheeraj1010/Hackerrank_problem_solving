/* write  a program to recieve valus oflatitude and longiude , in degrees ,  
of two places on the earth and output the distance between them
in nautical miles. the formula for distance in nautical miles is*/

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()

{
	printf(" to convert lattitude longitude to distance in nautical miles");
	
	float  a,b,c,d,f;
	printf("enter longitude of first place =");
	scanf("%f",&a);
	
	printf(" enter latitude of first place = ");
	scanf(" %f", &b);
	
	printf("enter longitude of first place =");
	scanf("%f",&c);
	
	printf("enter longitude of second place =");
	scanf("%d",&d);
	
	f=3963*acos(sin(a)*sin(b)+cos(a)*cos(b)*cos(c-d));
	printf(" distance in nauical mile = %f",f);
	
	return 0;
}


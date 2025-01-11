#include<stdio.h>
#include<conio.h>
#include<math.h>
float sine(float);
float fac(float);

void main()
{
	float degree,rad,si;
	printf("enter x in degree =");
	scanf("%f",&degree);
	rad=(degree*180)/3.14;
	si=sine(rad);
	printf("\nsin(%.2f)= %.2f",degree,si);
	
	getch ();
	}
	
	float sine(float x)
	{
		float s=0,i,j=1,m=1;
		for(i=1;i<6;i++)
		{
			m*=(-1);
			s=s+(m)*(pow(x,j+=2)/fac(j));
			
		}
		return s;
		 
	}
	
	float fac(float x)
	{
		if(x==0)
		return 1;
		return x*fac(x-1);
	}
	
	
	
	

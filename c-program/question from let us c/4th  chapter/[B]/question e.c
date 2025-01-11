#include<stdio.h>
#include<conio.h>
int main()
{
	int a=1,x,y,z,m;
	printf("to find armstrong number b/w 1 to 500\n\n");
	
	while(a<=500)
	{
	x=a/100; 
	y=a%100;	z=y/10;
	m=y%10;
		if(a==x*x*x+z*z*z+m*m*m)
		{printf(" %d is an armstrong number\n",a);
	
		a++;
		
		}
		

a++;
	}
	getch ();
	return 0;
}

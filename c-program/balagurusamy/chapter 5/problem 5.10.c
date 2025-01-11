#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float x1,x2;
	printf("if ax*x+bx+c=0 and roots are x1 and x2\n");
	printf("enter a=");
	scanf("%d",&a);
	
	printf("enter b=");
	scanf("%d",&b);
	
	printf("enter c=");
	scanf("%d",&c);
	
	//no slution if a nad b are zero
	if(a==0&&b==0)
	printf("there is no any solution\n");
	
	// only one root 
	
	else if(a==0)
	printf("only one solution . x=%.2f\n",(-(float)c/b));
	
	//there no real roots
	else if(b*b-4*a*c<0)
	printf("no real roots\n");
	
	// two real roots
    else
	{
	  
	printf("two real roots\n");
	x1=-b+((sqrt(b*b-4*a*c))/2*a);
	x1=-b-((sqrt(b*b-4*a*c))/2*a);
	printf("roots are %.2f , %.2f",(float)x1,(float)x2);
}
	
	getch ();
	
	 
	
	
}

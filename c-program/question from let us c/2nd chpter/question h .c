#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a;
	float b,rad1a,cos1a,sin1a,c,d,e;
	
	printf("write a program to recieve value of an angle in degrees and \ncheck weather sumof squares of sine and sine and cosine of \nthis angle is equal to 1");
	
	printf("\n\n enter any value of angle in degree a= ");
	scanf("%d",&a);
	rad1a=(a*3.14)/180;
	
	sin1a=sin(rad1a);
	cos1a=cos(rad1a);
	
	
	printf("solution");
	printf("\n\n sin(a)=%f, cos(b)= %f \n",sin1a,cos1a);
	printf("we know that sin^2(a)+cos^2(a)=1\n");
		
	printf("sin(%d)*sin*(%d)+cos(%d)*cos(%d)\n",a,a,a,a);
	printf("=    %f*%f+%f*%f\n",sin1a,sin1a,sin1a,sin1a);
	c=sin1a*sin1a;
	d=cos1a*cos1a;
	
	printf("=    %f * %f\n",c,d);
	
	e=c+d;
	printf("= %f  \n",e);
	printf("  proved");
	
	return 0;
	
}

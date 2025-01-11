#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i,k=-1;
float  x,sum=0,term=1;
	printf("to claculate sinx,cos and SUM\n");
	printf("enter value of x=");
	scanf("%f",&x);
	
	
	//sine
	for(i=1;term>=0.000001;i++)
	{
		term=(x/i)*term;
		if(i%2!=0)
		{
			k=(-1)*k;
			sum=sum+k*term;
		}
	}
	//cosine

	int m=-1;
	float sum_a=0;
	term=1;
	
	for(i=1;term>=0.000001;i++)
	{
		if(i%2!=0)
		{
			m=(-1)*m;
			sum_a=sum_a+m*term;
		}
		term=term*(x/i);
		
	}
	//calculation of SUM
	term=1;
	float sum_b;
	
	for(i=1;term>=0.00000000001;i++)
	{
		term=pow((1/(float)i),i);
		sum_b=sum_b+term;
	}
	
	
	printf("\nsinx=%f",sum);
	printf("\ncosx=%f",sum_a);
	printf("\nSUM=%f",sum_b);
	getch ();
}

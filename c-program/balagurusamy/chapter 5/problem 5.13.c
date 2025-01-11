#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int i,c,sum;
printf("sum fo number divisible by 4=");
for(i=1;i<=100;i++)
{
	if(i%4==0)
	{
		sum=sum+i;
		printf("+");
		printf("%d",i);
	c++;
	
		}
	}
	printf("=%d",sum);
	getch ();
}

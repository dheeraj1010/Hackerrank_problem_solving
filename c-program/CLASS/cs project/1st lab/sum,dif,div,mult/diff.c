#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
int a,b,sum=0,dif=0,mult=0,div=0;
	printf("please enter a and b\n");
	
	scanf("%d\n%d",&a,&b);
	sum=a+b;
	dif=a-b;
	mult=a*b;
	div=a/b;
	
	printf("sum of a and b =%d\n",sum);
	printf("diffrence of a and b =%d\n",dif);
	printf("multiplication of a nd b =%d\n",mult);
	printf("division of and b =%d",div);
	
	getch();
}

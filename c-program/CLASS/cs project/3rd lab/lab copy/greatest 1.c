#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("NAME-DHEERAJ KUMAR\nROLL NO-1704038\n\n");
	printf("enter three number \n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>=b&a>=c)
	{
	if(a==b&&b==c)
    printf("\n %d ,%d and %d  are equal",a,b,c);
    else
   printf("\n %d is greatest number ",a);
}
	else if(b>=c&&b>=a)
	{
			if(a==b&&b==c)
			   printf("\n %d ,%d and %d  are equal",a,b,c);
			   else
			printf("\n %d is greatest number ",b);
	}

	else if(c>=a&&c>=b)
{
		if(a==b&&b==c)
			   printf("\n %d ,%d and %d  are equal",a,b,c);
			   else
		printf("\n %d is greatest number ",c);
}

	else 
	getch ();
	return 0;
	
}

// to read age of 100 people 
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	int n,age,i;
	
	for(i=1;i<=100;i++)
	{
		printf("enter age=");
		scanf("%d",&age);
		if(age<0)
		break;
		if(age<=60&&age>=50)
		n++;
	}
	printf("\nno of people age of 50 to 60 is %d",n);
	getch ();
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
void main()
{
	int marks,i,a,b,c,d,e,f,g,h;
		printf("enter the makrs of 100 studnent\n");
	for(i=1;i<=100;i++)

	{
	printf("enter a marks of %dth student  =",i);
	scanf("%d",&marks);
	if(marks>80)
	{
		a++;
		b++;
		c++;
		e++;
	}
	else if(marks>60&&marks<=80)
	{
		b++;
		c++;
		f++;
	}
	else if(marks>40&&marks<=60)
	{
		c++;
		g++;
		
	}
	else
	d++;
	h++;
	
}
printf("\n\n");
printf("%d student have obtained more than 80 marks\n ",a);
printf("%d stduent have obtained more than 60 marks\n",b);
printf("%d student have obtained more than 40 marks\n",c);
printf("%d stduent have obtained 40 or less than 40 marks\n",d);
printf("%d stduent have obtained marks in range of 81 to 100\n",e);
printf("%d stdudent have obtained marks in range of 61 to 80\n",f);
printf("%d student have obtained marks in range of 41 to 60\n",g);
printf("%d stduent have obtained marks in range of 0 to 40 \n",h);

getch ();



}

/*WAP to enter the marks of a students in four subjects. Then calculate the total, aggregate (average), and display 
the grades obtained by the student.*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int m1,m2,m3,m4,av,total;
char g;	
	printf("enter marks in four subjects :");
	scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
	
	total=(m1+m2+m3+m4);
	av=total/4;

int p=(total/400.0)*100;

if(p>90) g='A';
else if(p>80)  g='B';
else if(p>70)  g='C';
else if(p>50)  g='D';
else g='F';

printf("\ntotal marks =%d \n vaverage marks =%d \n grade = %c",total,av,g);



}

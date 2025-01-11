/* given the cordinates (x,y) of center of a circle and its radius ,
write a program which will determine weather a point lies inside the circle , on the circle 
or outside the circle .*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{
	int x,y,a,r,dis,l,m;
	
	printf("to determine point lies inside the circle or not");
	
	printf("\n\nenter x cordinate of center of circle =");
	scanf("%d",&x);
	
	printf("enter y cordinate of center of circle =");
	scanf("%d",&y);
	
	printf("enter radius of the circle =");
	scanf("%d",&r);
	printf("\n\n to check point lies outside the circle or not enter the cordiante of other point");
	printf("\nenter the x cordinate of a point =");
	scanf("%d",&l);
	printf("enter the y cordinate of a point =");
	scanf("%d",&m);
	
	a=(x-l)*(x-l)+(y-m)*(y-m);
	dis=sqrt(a);
	if(dis>r)
	{printf("\n\npoint lies outside the circle");
	
	}
	
	else
	printf("point lies inside the circle");
	
	return 0;
}

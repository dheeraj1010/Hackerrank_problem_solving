#include<stdio.h>
#include<conio.h>
#include<math.h>
 
 float distance(float ,float ,float ,float);
  float area_tri(int ,int ,int );
  int check_tri(float ,float,float,float,float,float,float,float);
 int main()
 {
 	float x1,y1,x2,y2,x3,y3,x,y;
	 printf("enter x1 y1 x2 y2 x3 y3 =");
	 scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	 float distance_x1_x2=distance(x1,y1,x2,y2);
	 float distance_x2_x3=distance(x2,y2,x3,y3);
	 float distance_x1_x3=distance(x1,y1,x3,y3);
	 float area=area_tri(distance(x1,y1,x2,y2),distance(x2,y2,x3,y3),distance(x1,y1,x3,y3));
	 printf("\ndistance_x1_x2=%.2f",distance_x1_x2);
	 printf("\ndistance_x2_x3=%.2f",distance_x2_x3);
	 printf("\ndistance_x1_x3=%.2f",distance_x1_x3);
	 printf("\narea=%.2f",area);
	 //check point either lies inside or outside 
	 printf("\nenter x, y=");
	 scanf("%d%d",&x,&y);
	 int tri_check_vlaue=check_tri(x1,y1,x2,y2,x3,y3,x,y);
	 if(tri_check_vlaue==1)
	 printf("\n\nx , y lies imnside the triangle ");
	 else
	 printf("x ,y lies outside the trinagle");
	 
	 getch ();
	 
	  
 }
 
 float distance(float x1,float y1,float x2,float y2)
 {
 	float distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
 	return distance;
 }
 
 float area_tri(int x,int y,int z)
{
	float s=(x+y+z)/2.0;
	float area=sqrt(s*(s-x)*(s-y)*(s-z));
	return area;
}

 int check_tri(float x1,float y1,float x2,float y2,float x3,float y3,float x ,float y)
 {
 	float distance_x1_x2=distance(x1,y1,x2,y2);
	 float distance_x2_x3=distance(x2,y2,x3,y3);
	 float distance_x1_x3=distance(x1,y1,x3,y3);
	 
	 float distance_x1_x=distance(x1,y1,x,y);
	 float distance_x2_x=distance(x2,y2,x,y);
	 float distance_x3_x=distance(x,y,x3,y3);
	 float area=area_tri(distance(x1,y1,x2,y2),distance(x2,y2,x3,y3),distance(x1,y1,x3,y3));
	 float area_x1_x2_x=area_tri(distance(x1,y1,x2,y2),distance(x2,y2,x,y),distance(x1,y1,x,y));
	 float area_x2_x3_x=area_tri(distance(x2,y2,x3,y3),distance(x,y,x3,y3),distance(x2,y2,x,y));
	 float area_x3_x_x1=area_tri(distance(x1,y1,x3,y3),distance(x1,y1,x,y),distance(x,y,x3,y3));
	 int area_by_part=area_x1_x2_x+area_x2_x3_x+area_x3_x_x1;
	 int area_whole=area;
	 if(area_by_part==area_whole)
	 return 1;
	 else return 0;
	 

 }

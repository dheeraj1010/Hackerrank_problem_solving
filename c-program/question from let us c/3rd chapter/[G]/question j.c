#include<stdio.h>

int main()

{
	int r,g,b;
	printf("to convert RGB colour in CMYK color\n");
	printf("range of RGB is 0 to 255 and range of CMYK is 0.0 to 1.0\n\n");
	
	printf("enter the value of red =");
	scanf("%d",&r);
	printf("enter the value of green =");
	scanf("%d",&g);
	printf("enter the value of Blue");
	scanf("%d",&b);
	
	float w,c,m,y,black;
	
	if(r>g&&r>b)
	w=r/255;
	else if(g>r&&g>b)
	w=g/255;
	else if(b>r&&b>g)
{
	w=b/255;}
	c=(w-r/255)/w;
	m=(w-g/255)/w;
	y=(w-b/255)/w;
	black=1-w;
	printf("\ncyan =%f",c);
	printf("\nmageneta =%f",m);
	printf("\nyellow =%f",y);
	printf("\nblack = %f",black);
	
	return 0;
	
	
}

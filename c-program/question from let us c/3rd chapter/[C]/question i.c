/* Given the length and breadth of a rectangle , write  a program to find
weather the area of a rectangle is greater than ists perimeter . For exmaple , the area 
of the rectangle with length =5 and breadth =4
is greater than its perimeter */
#include<stdio.h>
#include<conio.h>
#include<math.h>

 int main()
 {
 	int a,b,area,perm;
 	
 	printf("enter length of the rectangle=");
 	scanf("%d",&a);
 	
 	printf("enter breadth of the rectangle =");
 	scanf("%d",&b);
 	
 	area=a*b;
 	perm=2*(a+b);
 	
 	printf("\n\narea of rectangle =%d",area);
 	printf("\n perimetre of rectangle =%d\n\n",perm);
 	
 	if(area>perm)
 	{ 
 	printf("area is greater than perimetre");
	 }
	 else if(area=perm)
	 {
	 	printf("area is equal to perimetre");
	 }
	 
	 else
	 printf("area is less than perimetre");
	 
	 return 0;
}

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int x[3][5]= {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}},*n=&x;
	
	printf("1.    %d",*(*(x+2)+1));
	printf("\n2.       %d",*(*x+2)+5);
	printf("\n3.         %d",*(*(x+1)));
	printf("\n4.         %d",*(*(x)+2)+1);
	printf("\n5.         %d",*(*(x+1)+3));
	printf("\n6.         %d",*n);
	printf("\n7.         %d",*(n+2));
	printf("\n8.         %d",(*(n+3)+1));
	printf("\n9.         %d",*(n+5)+1);
	printf("\n10.        %d",++*n);
	getch ();
}

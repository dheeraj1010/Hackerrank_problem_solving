#include<stdio.h>
#include<conio.h>

void main()
{
	unsigned int arr[3][3]={2,4,6,9,1,10,16,64,5};
	
	printf("1.      %d",**arr);
	printf("\n2.      %d",**arr<*(*arr+2));
	getch ();
}

#include<stdio.h>
#include<conio.h>
int main()
{
	static count  =5;
	printf("count =%d \n ",count--);
	if(count!=0)
	main();
	return 0;
}

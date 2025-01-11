#include<stdio.h>
int main()
{
	void slogan();
	int c=5;
	/*here c is missing */slogan();
	printf("%d\n",c);
	return 0;
}
void slogan()
{
	printf("Only he men use C !\n");
	
}

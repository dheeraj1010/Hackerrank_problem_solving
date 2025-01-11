#include<stdio.h>
int main()
{
	char a,b,c;
	printf("enter any letter or sybol to find their value in ASCII =");
	scanf("%c",&a);
	
	if(a>=65&&a<=90)
	printf("\n character entered by you is a capital letter");
	else if(a>=97&&a<=122)
	printf("\ncharacter entered by you is a small case letter");
		else if((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))
		printf("character entered by you is a special symbol ");
		else
	
	return 0;
	
	
}

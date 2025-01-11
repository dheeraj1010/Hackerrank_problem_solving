#include<stdio.h>
#include<conio.h>
#include<string.h>
void fib(char *,int );

void main()
{
	char str[500];
	
	int n,i;
	printf("enter number for fibonacci series :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	fib(str,n);
	printf("\n%s",str);
	
   }
getch ();
}

void fib(char *str,int n)
{
str[0]='a';


}

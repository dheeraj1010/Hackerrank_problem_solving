#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5]={5,1,15,20,25};
	int i,j,k=1,m;
	i=++a[i];
	j=a[1]++;
	m=a[i++];
	printf("%d %d %d\n",i,j,m);
	
	getch ();
}

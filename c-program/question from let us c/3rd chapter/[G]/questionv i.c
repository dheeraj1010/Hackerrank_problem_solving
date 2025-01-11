#include<stdio.h>
int main()
{
	int a,b;
	printf("To decide the weight of boxer\n");
	printf("enter the weight of Boxer =");
	scanf("%d",&a);
	printf("\n\n");
	
	if(a<115)
	printf("boxer's weight class= flyweight ");
	
	else if(a>=115&&a<=121)
	printf("boxer's weight class= Bantamweight");
	
	else if(a>=122&&a<=153)
	printf("boxer's weight class= Featherweight");
	
	else if(a>=154&&a<=189)
	printf("boxer's weight class= Middleweight");
	
	else if(a>=190)
	printf("boxer's weight class= heavyweight");
	
	return 0;
}

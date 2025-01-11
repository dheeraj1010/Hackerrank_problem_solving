/* if the ages ofRam,shyamandAjay are input through the keyboard ,
write aprogram a determine the youngest ofthe three*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	printf("identify the younger one in Ram,shyam,and ajay by entering his age");
	
	int ra,sa,aa;
	
	printf("\n enter the age of Ram = ");
	scanf("%d",&ra);
	
	printf("enter the age of Shyam=");
	scanf("%d",&sa);
	
	printf("enter the age of Ajay = ");
	scanf("%d",&aa);
	
	if((ra>sa)&&(ra>aa))
	{printf("ram is younger");
	}
	
	else if((sa>ra)&&(sa>aa))
	{
	printf("shyam is younger");
	}
    else if((aa>ra)&&(aa>sa))
	{
	
	printf("ajay is younger");
}
	return 0;
	
}

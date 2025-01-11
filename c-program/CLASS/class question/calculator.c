#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	int n1,n2,c;
	
	char ans;
	
	do
	{
	
	printf("1. addition \n2.subtraction \n3.multiplication\n4.division");
	printf("\nchoose any option by entering 1/2/3/4\n");
	scanf("%d",&c);
	
	printf("enter two  number : ");
	scanf("%d%d",&n1,&n2);
	
	switch(c)
	{
		case 1:
			{
				printf("\n%d + %d = %d ",n1,n2,n1+n2);
			}
		break ;
		case 2:
	     	{
			printf("\n%d - %d = %d",n1,n2,n1-n2);
			}	
		break;
		
		case 3:
	    	{
			printf("\n%d * %d = %d ",n1,n2,n1*n2);
			}	
			break ;
			
		case 4:
		     {
		     	printf("\n %d /%d = %.2f",n1,n2,(n1)/(float)n2);
		     	
			 }	
			 break ; 
			 
			 default :
			 	printf("\nincorrect option choosen ");
	}
	printf("\n___________________________________________________________________________________________________________\n");
	printf("\n\ndo you want to use calculator again (y/n) =");
ans= getch();
		printf("\n___________________________________________________________________________________________________________\n");
	}while(ans=='Y'||ans=='y');
	getch ();
}


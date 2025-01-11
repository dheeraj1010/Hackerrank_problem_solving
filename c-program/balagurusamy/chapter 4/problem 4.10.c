#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
void main()
{
char na[20],nb[20];
int nac,nbc;
float nap,nbp;
			printf("enter name of product =");
			scanf("%s",&na);
			printf("enter code of %s =",na);
			scanf("%d",&nac);
			printf("enter price of %s =",na);
			scanf("%f",&nap);
			
			printf("\n\nenter name of product =");
			scanf("%s",&nb);
			printf("enter code of %s =",nb);
			scanf("%d",&nbc);
			printf("enter price of %s =",nb);
			scanf("%f",&nbp);
			
			printf("\nName                    Code                           Price");
		   printf("\n%-6s                      %d                             %10.2f",na,nac,nap);
			printf("\n%6s                      %d                             %10.2f",nb,nac,nbp);
			
			getch ();
			
		
			
	
	printf("enter name of product =");
	
}

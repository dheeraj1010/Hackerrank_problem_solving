/* write a progrma to print the multiplication table of the 
number entered by the user .
the table should get displayed in the following forn:
28*1=23
29*2=58
.....
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,table;
	printf("to print table of a number entered by a user\n");
	printf("\nenter a numnber =");
	scanf("%d",&a);
	printf("\n");
	for(i=1;i<=10;i++)
	{
		table=a*i;
		printf("  %d * %d = %d\n",a,i,table);
		
	}
	getch ();
	return 0;
	
}

/* write program tocount and print the  number of negative and positive numbers in  given set
of numbers . Test your program with a suitable set of numbers . use scanf
to read the numbers .reading should me terminated when the vlaue 0 is encountered .*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,negative,positive;
	printf(" write program tocount and print the  number of negative and positive numbers in  given set\n");
printf("of numbers . Test your program with a suitable set of numbers . use scanf\n");
printf("to read the numbers .reading should me terminated when the vlaue 0 is encountered \n");
	printf("\n\nenter number and press enter button \n");
	
	while(2)
	{
	   scanf("%d",&n);
	   if(n<0)
	   negative++;
	   else if(n>0)
	   positive++;
	   else
	   break;
	}
	printf("\n%d positive number you have entered\n ",positive);
	printf("%d negative number you have entered ",negative);
	getch ();
	return 0;
	
}


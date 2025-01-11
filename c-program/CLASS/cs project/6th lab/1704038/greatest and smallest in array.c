#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,great,small;
	printf("Dheeraj kumar\nRoll no-1704038\n");
	
	for(i=0;i<5;i++)
	{
		printf("enter a number =");
		scanf("%d",&a[i]);
		
	}
	small=a[0];
	for(i=1;i<5;i++)
	{
		if(small>a[i])
		{
			small=a[i];
		}
	}
	
	great=a[0];
	for(i=1;i<5;i++)
	{
		if(great<a[i])
		{
			great<a[i];
			
		}
	
	}
		printf("\ngreatest number=%d",great);
		printf("\nsmallest number =%d",small);
		getch ();
		
    
}

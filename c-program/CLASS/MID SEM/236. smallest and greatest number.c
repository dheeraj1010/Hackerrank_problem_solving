

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,great,small;
	
	for(i=0;i<10;i++)
	{
		printf("enter %d th term =",i+1);
		scanf("%d",&a[i]);
	}
	
	great=a[0];
	small=a[0];
	
	for(i=0;i<10;i++)
	{
		if(great<a[i])
		{
			great=a[i];
		}
		}	
	for(i=0;i<10;i++)
	{
		if(small>a[i])
		{
			small=a[i];
		}
	}
	
	printf("\ngreatest number =%d",great);
	printf("\nsmallest number =%d",small);
	getch ();
}

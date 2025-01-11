#include<stdio.h>
#include<conio.h>
#include<math.h>


	struct land
	{
		float a;
		float b;
		float angle;
		float area;
		
	};

int main()
{
	struct land
	{
		float a;
		float b;
		float angle;
		float area;
		
	};

	struct land tri[6];
	int i;
	
	for(i=0;i<6;i++)
	{
		printf("\n___________________________________________________________________\n");
	
		printf("for land %d :\n",i+1);
		printf("enter a =");
		scanf("%f",&tri[i].a);
		
		printf("enter b =");
		scanf("%f",&tri[i].b);
		
		printf("enter angle =");
		scanf("%f",&tri[i].angle);
		
		tri[i].area=(0.5)*tri[i].a*tri[i].b*sin(tri[i].angle);
	}
	
	int plot_no=0;
	float largest=tri[0].area;
	for(i=0;i<6;i++)
	{
		if(largest<tri[i].area)
		{
			largest=tri[i].area;
			plot_no=i+1;
		}
	}
	
printf("\n\nlargest area of plot no %d and thier area = %.2f  unit square  ",plot_no,largest);

	getch ();	
}

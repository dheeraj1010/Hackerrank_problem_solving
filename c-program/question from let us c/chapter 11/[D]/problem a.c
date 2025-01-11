#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 2

struct student 
{
	int roll_no;
	char name[20];
	char department[20];
	char course[20];
	int year;
	
};

void display_name(struct student *,int n);
void display_roll(struct student *,int n);

int main()
{
	int i,year,option,roll;
	struct student st[MAX];
	
	for(i=0;i<MAX;i++)
	{
		printf("enter name of %dth student\n :",i+1);
		scanf("%s",&st[i].name);
		
		printf("\nenter roll no of %dth student :",i+1);
		scanf("%d",&st[i].roll_no);
		
		printf("\nenter department of %dth student :",i+1);
	    scanf("%s",&st[i].department);
		 
		printf("\nenter course of %dth student :",i+1);
		scanf("%s",&st[i].course);
		
		printf("enter year of admission of %d th student :",i+1);
		scanf("%d",&st[i].year);
		printf("\n_____________________________________________________________________________\n");
	}
	
	printf("\nchoose any option  by entering number :\n");
	
	printf("1  to print  student name by year wise \n");
	printf("2   to print student data by roll no :\n");
	scanf("%d",&option);
	
	switch(option)
	{
	case 1:
		{
		
	printf("enter year to print student name :");
	scanf("%d",&year);
	
	display_name(&st,year);
}
break;
	
	case 2:
		{
		 printf("\nenter roll no fo student to printf student data :");
		 scanf("%d",&roll);
		 
		 display_roll(st,roll);
		}
		break ;
}

getch ();

}

void display_name(struct student *st,int n)
{
	
	printf("\nname of stduent in year %d \n",n);
	int i,count=1;
	for(i=0;i<MAX;i++)
	{
		if(st[i].year==n)
		{
			printf("%d. %s\n",count,st[i].name);
			count++;
		}
	}
}
	
	void display_roll(struct student *st,int roll)
	{
		printf("\ndata of student \n");
		int i;
		for(i=0;i<MAX;i++)
		{
			if(st[i].roll_no==roll)
			{
				printf("\nNAME= %s",st[i].name);
				printf("\nROLL NO- %d",st[i].roll_no);
				printf("\ncourse = %s",st[i].course);
				printf("\ndepartment = %s",st[i].department);
				printf("\nyear of admission : %d",st[i].year);
				break;
			}
		}
	}

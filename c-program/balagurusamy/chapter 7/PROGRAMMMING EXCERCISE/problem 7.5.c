#include<stdio.h>
#include<conio.h>
#include<math.h>
#define STUDENT 100
#define SUBJECT 3
void main()
{
	int marks[STUDENT][SUBJECT+3];
	int sum,high_sub[2][SUBJECT+1],highest[3],i,j;
	highest[3]=marks[0][4];
	
	printf("calculation of marksheet of all stduents\n\n");
	
	for(i=0;i<STUDENT;i++)
	{
		sum=0;
		
		printf("enter roll no of %dth student=",i+1);
		scanf("%d",&marks[i][0]);
		for(j=1;j<=SUBJECT;j++)
		{
			printf("enter marks of %dth student in subject %d =",i+1,j);
			scanf("%d",&marks[i][j]);
			sum=sum+marks[i][j];
		}
		
		
		
		//total marks obtained by each stduent 
	marks[i][SUBJECT+1]=sum;
	
	high_sub[0][1]=marks[0][1];
	high_sub[0][2]=marks[0][2];
	high_sub[0][3]=marks[0][3];
		
	}
	
	
	
	
//highest marks in each subject
	for(i=0;i<STUDENT;i++)
	{
		for(j=1;j<=SUBJECT;j++)
		{
			if(high_sub[0][j-1]<marks[i][j])
			{
				high_sub[0][j-1]<marks[i][j];
				high_sub[1][j-1]=marks[i][0];
			}
		}
		if(highest[0]<marks[i][SUBJECT+1])
		{
			highest[0]=marks[i][SUBJECT+1];
			highest[1]=marks[i][0];
		}
	}
	
	
	printf("\n\n");
	printf("                   TABLE\n______________________________________________________________________\n");
	
	printf("ROLL NO");
	for(i=1;i<=SUBJECT;i++)
	{
		printf("     Subject %d",i);
	}
	printf("      total marks\n");
	
	//printing of all RESULTS
	for(i=0;i<STUDENT;i++)
	{
		printf("%d",marks[i][0]);
		for(j=1;j<=SUBJECT;j++)
		{
			printf("     %d",marks[i][j]);
		}
		printf("     %d",marks[i][4]);
		printf("\n");
	}
	
	printf("\n\n");
	//highest marks in each subject
	for(i=0;i<SUBJECT;i++)
	{
		printf("highest marks in sbubject %d is %d  of roll no=%d\n",i+1,high_sub[0][i],high_sub[1][i]);
	}
	printf("highest marks =%d of student roll no =%d\n\n",highest[0],highest[1]);
	getch ();
	
}

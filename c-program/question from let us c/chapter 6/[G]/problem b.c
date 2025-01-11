//problem in repeat same thing 
#include<stdio.h>
#include<conio.h>
void marks(int,int,int,int *,int * ,int);
void main()
{
		int percent,average;
	int subject_1,subject_2,subject_3,highest;
	char ans;
	printf("enter highest marks in one subject =");
	scanf("%d",&highest);
	printf("\n");
	do
	{
	
		printf("enter marks in subject_1 =");
		scanf("%d",&subject_1);
		printf("enter marks in subject_2 =");
		scanf("%d",&subject_2);
		printf("enter marks in subject_3 =");
		scanf("%d",&subject_3);
	
	
	marks(subject_1,subject_2,subject_3,&percent,&average,highest);
	printf("you have got %d  percent marks \naverage  marks = %d ",percent,average);
	printf("\n\ndo you want to check more result (y/n)=");
	scanf("%c",&ans);

    }while(ans=='y');

getch ();
}

void marks(int sub_1,int sub_2,int sub_3,int *per,int *ave,int high)
{
	int sum=sub_1+sub_2+sub_3;
	*ave=sum/3;
	*per=((sum*100)/(3*100));
	
}

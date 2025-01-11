#include<stdio.h>
#include<conio.h>
#include<string.h>
void extract(char *,int ,int);

void main()
{
	char str[30];
	printf("enter a string :\n");
	gets(str);
	
	int pos,n;
	
	printf("enter number of character to extract : ");
	scanf("%d",&n);
	printf("\nenter position :");
	scanf("%d",&pos);
	if(n>strlen(str))
	{
		printf("\ninvalid number entered  try again_...............");
	}
	else
	{
	extract(str,n,pos);
	
	printf("\n\nnew string :%s",str);
}
	getch ();
	
	
	
}

void extract(char *str,int n,int pos)
{
	int i;

	for(i=0;i<n;i++)
	{
		str[i]=str[pos-1];
		pos++;
		
		
	}
	str[i]='\0';
}

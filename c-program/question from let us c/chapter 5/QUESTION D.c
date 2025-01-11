/*********************************************************************************************************************
Writw  aprogram to find the grace marks for  a student using switch .the user shoild enter the class obtained by the 
student and the number of subjects he has failed in .use the following logic:
---if the student gets first class and the number of subjects he failed in is greater than 3, 
then he does not get any grace. otherwise the grace is of 5 marks per subject .
---if the stduent gets second class and the number of subjects is failed in is greater than 2,
then he does not get any grace . otherwise the grace is of 5 marks per subject.
---if the student gets third clas and the number of subjecta he failed in is greater than 1 ,
then he does not get any grace . otherwise the grace marks is of 5 marks .*/
#include<stdio.h>
#include<conio.h>
int main()
{
	
	int class,fail;
	
	//program name 
	printf("to calculate grace marks \n\n");
	
	//value entered by the user 

	printf("enter the class you have obtained (e.g. 1,2,3) = ");
	scanf("%d",&class);
	printf("enter the number of subject you have failed = ");
	scanf("%d",&fail);
	
	if(fail<=4&&class<=3)
	{
		switch(class)
		{
			case 1:
				{
					if(fail>3)
					{
						printf(" \nyou will not get any grace marks becuase you faild in more than 3 subjects \n");
						
					}
					else 
					{
						int grace;
						grace=fail*5;
						printf("you will get 5*%d =%d grace marks ",fail,grace);
					}
				}
				break;
				case 2:
					{
							if(fail>2)
				     	{
						printf(" \nyou will not get any grace marks becuase you faild in more than 2 subjects \n");
						
				      	}
					else 
				     	{
						int grace;
						grace=fail*4;
						printf("you will get 4*%d =%d grace marks ",fail,grace);
				     	}
					}
					break;
					case 3:
				     	{
							if(fail>1)
				     	     {
						printf(" \nyou will not get any grace marks becuase you faild in more than 1 subjects \n");
						
				      	     }
					else 
				         	{
						
					
						printf("you will get 5  grace marks ",fail);
				        	}
					}
					break;
						
		}
	}
	else 

	printf(" \nyou not get any grace marks");
	
	getch ();
	return 0;
	 
}

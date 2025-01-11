/* If the marks obtained by the student in five different subjects are input through the keyboard,
writ  a program to find out the agreegrate marks and percentage marks obtained by the student .
assume that the maximum marks that can be obtained by a student in each subject is 100.*/

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{ 
 //decleration of variables
 float phy,mat,che,bio,eng,sum=0,perc=0;
 
 // taking the input from the user
 printf("please enter the marks in the 1st subject (maximum marks 100)\n");
 scanf("%f",&phy);
 
  printf("please enter the marks in the 2nd subject (maximum marks 100)\n");
  scanf("%f",&mat);
 
  printf("please enter the marks in the 3rd subject (maximum marks 100)\n"); 
  scanf("%f",&che);
    
     printf("please enter the marks in the 4th subject (maximum marks 100)\n");
     scanf("%f",&bio);
     
      printf("please enter the marks in the 5th subject (maximum marks 100)\n\n");
      scanf("%f",&eng);
       //print subject wise marks
      
 printf("sbject 1 =%f\nsbuject 2 =%f\nsubject 3 = %f\nsubject 4 = %f\n subject 5 = %f\n\n",phy,mat,che,bio,eng);
 
 
 sum=phy+mat+che+bio+eng;
 
 printf("agreegate marks = %f\n\n",sum);
 
perc=100*sum/500;
printf("percentage marks = %f ",perc);


getch();

}



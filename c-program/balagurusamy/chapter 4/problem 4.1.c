/* Given the string " WORDPROCESSING " , Write a program to read the string from the terminal and display the same in the following formats */
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
void main()
{
	
	char name1[]="WORD";
	char name2[]="PROCESSING";
	
	
	

 printf("\n\n");
 printf("%.4s %-14.10s ",name1,name2);
 printf("\n%s\n%s",name1,name2);
 printf("\n%.1s.%.1s",name1,name2);
 
 getch ();
 
}

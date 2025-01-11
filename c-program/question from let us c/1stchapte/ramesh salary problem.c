/*ramesh's basic saalaryis inputthrough the keyboard. his dearness allowance i 40% of basic salary , 
and house rent allowance is 40% of basic salary n,and houde rent allowance is 
20% of basic salary. write a programn  to calcul;ate his gross  salary.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
 
 {
 	
 	int a ,dall=0,hrent=0, div=0;
 	
 	 printf("please type the salary of ramesh so can i give you the gross salary amount\n");
 	 
 	 scanf("%d\n",&a);
 	 
 	 printf("ramesh earn per month=%d\n",a);
 	 
 	 dall=4*a/10;
 	 
 	 printf("dearness allownace debited from his salary=%d\n",dall);
 	 
 	 hrent=2*a/10;
 	 
 	 printf("home rent debited from his salary%d\n",hrent);
 	 
 	 
 	 
 	 
 	 div=4*a/10;
 	 printf("ramesh's gross salary left after home rent and dearnes allowance is that =%d\n",div);
 	 printf("thanksforusing this program, iam begginer soplease give me suggestion on my following given email adress");
 	 printf("email-dheerajkumarmanjhi@gmail.com");
 	 
 	 
 	 getch ();
 	 

 }

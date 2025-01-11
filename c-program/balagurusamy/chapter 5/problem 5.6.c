#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
void main()
{
	float i,j,root;
	
	printf("                Suare root table.\n");
	printf("______________________________________________________________________________________________________\n");
	printf("Number        0.0        0.1        0.2        0.3        0.4        0.5        0.6        0.7        0.8        0.9\n");
	
	for(i=0.0;i<10;i=i+1)
	 { 
	printf("%.1f",i);
	      for(j=0.0;j<1;j=j+0.1);
	     {
	     	if(i==0&&j==0)
	     	root=0;
	     	else
		 root=sqrt(i+j);
		 printf("%0.3f        ",root);
		 
	
	     }
	     printf("\n");
	 }
	 getch ();
	
}

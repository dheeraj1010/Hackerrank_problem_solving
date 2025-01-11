#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,j;
	float d,term=1,eular=0,t1,t2;
	
	for(i=1;d<=0.00001;i++)
	{
		t1=term;
	term=term*(1/(float)i);
	t2=term;
		eular=eular+term;
		d=t1-t2;
		
		
	}
	printf("\ne =%f",eular);
	getch ();
}

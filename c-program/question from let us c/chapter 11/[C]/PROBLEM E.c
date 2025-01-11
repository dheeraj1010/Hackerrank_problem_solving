#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	struct m
	{
		int x,y;
	}s[]={10,20,15,25,8,75,6,2};
	
	int *i;
	i=s;
	
	printf("1.   %d",*(i+3));
	printf("\n2.    %d",s[i[7]].x);
	printf("\n3.     %d",s[(s+2)->y/3[i]].y);
	printf("\n4.     %d",i[i[1]-i[2]]);
	printf("\n5.     %d",i[s[3].y]);
	printf("\n6.     %d",(s+1)->x+5);
	printf("\n7.     %d",*(i+1)**(i+4)/(*i));
	printf("\n8.      %d",s[i[0]-i[4]].y+10);
	printf("\n9.      %d",(*(s+*(i+1)/(*i))).x+2);
	printf("\n10.     %d",++i[i[6]]);
	
	
	
	getch ();
}

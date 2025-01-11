#include<stdio.h>
#include<conio.h>
#include<math.h>
int ss(int ,int ,int, int ,int ,int * ,float * ,float *);
void main()
{
	int sum;
	float av,s_dev;
	int a,b,c,d,e;
	printf("enter A  B   C  D  E =");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	ss(a,b,c,d,e,&sum,&av,&s_dev);
	printf("\n sum=%d",sum);
	printf("\naverage =%.2f ,\n standard deviation =%.2f",av,s_dev);
	getch ();
}

int ss(int l,int m, int n, int p, int q, int *sum, float *s, float *s_dev)
{
	*sum=l+m+n+p+q;
	*s=*sum/5;
	*s_dev=sqrt(((*s-l)*(*s-1)+(*s-m)*(*s-m)+(*s-n)*(*s-n)+(*s-p)*(*s-p)+(*s-q)*(*s-q))/5);
	
}


#include<stdio.h>
#include<conio.h>
//declaration for non recursive 
int non_r(int  );
//declaration of  recursive function
int rec(int );

void main()
{
	int sum_n,n,sum_r;
	printf("enter a five digit number =");
	scanf("%d",&n);
	
	sum_n=non_r(n);
	sum_r=rec(n);
	
	printf("\n sum of digit via recursive =%d ",sum_r); //recursive fu nction print
	printf("\nsum of digit via non recursive =%d",sum_n); // non recursive  print 
	
	getch ();

}

//non recursive function body
int non_r(int n)
{
	int sum=0;
	while(n!=0)
	{
		sum=n%10+sum;
		n/=10;
		
	}
	return sum;
}

//recrsive function body
int rec(int n)
{
	if(n==0)
	return 0;
	
	return n%10+rec(n/10); 
}





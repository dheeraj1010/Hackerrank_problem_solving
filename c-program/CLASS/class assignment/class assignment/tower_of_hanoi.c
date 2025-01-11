#include<stdio.h>

 hanoi(int ,char,char,char);
 
 int main()
 {
 	int n;
 	printf("enter number of disk =");
 	scanf("%d",&n);
 	
 	hanoi(n, 'A', 'B', 'C');
 }
 
 hanoi(int num, char from_peg,char aux_peg,char to_peg)
 {
 	if(num==1)
 	{
 		printf("move peg from %c to %c\n",from_peg,to_peg);
 		return;
 		
	 }
	 hanoi(num-1,from_peg,to_peg,aux_peg);
	 printf("move peg from %c to %c\n",from_peg,to_peg);
	 hanoi(num-1,aux_peg,to_peg,from_peg);
 }

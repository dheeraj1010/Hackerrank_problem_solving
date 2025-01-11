#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char first[11][10]={"#######"," # ","#####","#####","#     ","######","#######","#######","#######","#######"};
	char secon[11][10]={"#     #","## ","    #","    #","#     ","#     ","#      ","      #","#     #","#     #"};
	char third[11][10]={"#     #"," # ","    #","    #","#     ","#     ","#      ","      #","#     #","#     #"};
	char fourt[11][10]={"#     #"," # ","    #","#####","# #   ","######","#      ","   ####","#######","#######"};
	char fifth[11][10]={"#     #"," # ","#####","    #","##### ","     #","#######","      #","#     #","      #"};
	char sixth[11][10]={"#     #"," # ","#    ","    #","  #   ","     #","#     #","      #","#     #","      #"};
	char seven[11][10]={"#     #"," # ","#    ","    #","  #   ","     #","#     #","      #","#     #","      #"};
	char eight[11][10]={"#######","###","#####","#####","  #   ","######","#######","      #","#######","#######"};
	
	int n,cpy=0,count=0,div=10000;
	printf("enter a five digit  number :");
	scanf("%d",&n);
	cpy=n;
	


	while(cpy!=0)
	{
	count=cpy/div;
	printf("%s ",&first[count]);
	cpy=cpy%div;
	div/=10;
   }
printf("\n");
cpy=n;
	while(cpy!=0)
	{
	count=cpy/div;
	printf("%s ",&secon[count]);
	cpy=cpy%div;
	div/=10;
   }
	
	printf("\n");
cpy=n;
	while(cpy!=0)
	{
	count=cpy/div;
	printf("%s ",&third[count]);
	cpy=cpy%div;
	div/=10;
   }
	
	printf("\n");
cpy=n;
	while(cpy!=0)
	{
	count=cpy/div;
	printf("%s ",&fourt[count]);
	cpy=cpy%div;
	div/=10;
   }
	
	printf("\n");
cpy=n;
	while(cpy!=0)
	{
	count=cpy/div;
	printf("%s ",&fifth[count]);
	cpy=cpy%div;
	div/=10;
   }
	
	
	printf("\n");
cpy=n;
	while(cpy!=0)
	{
	count=cpy/div;
	printf("%s ",&sixth[count]);
	cpy=cpy%div;
	div/=10;
   }
	
	printf("\n");
cpy=n;
	while(cpy!=0)
	{
	count=cpy/div;
	printf("%s ",&seven[count]);
	cpy=cpy%div;
	div/=10;
   }
	
	
	printf("\n");
cpy=n;
	while(cpy!=0)
	{
	count=cpy/div;
	printf("%s ",&eight[count]);
	cpy=cpy%div;
	div/=10;
   }
	
	getch ();
	
	
}

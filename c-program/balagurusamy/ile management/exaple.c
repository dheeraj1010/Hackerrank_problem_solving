#include<stdio.h>
#include<conio.h>

main()
{
	FILE *f1;
	
	char c;
	
	printf("data input\n");
	
	f1=fopen("INPUT","w");
	
	while((c=getchar())!=EOF)
	putc(c,f1);
	
	fclose(f1);
	printf("\ndata output\n");
	f1=fopen("INPUT","r");
	
	while((c=getc(f1)!=EOF))
	printf("%c",c);
	
	fclose(f1);
	
	getch ();
}

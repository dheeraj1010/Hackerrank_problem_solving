#include<stdio.h>
#include<conio.h>
void main()
{
	char n;
	printf("enter a character to check vowel or not =");
	scanf("%c",&n);

if(n=='a'||n=='A'||n=='e'||n=='E'||n=='i'||n=='I'||n=='o'||n=='O'||n=='u'||n=='U')
printf("%c  is vowel",n);

else
printf("%c is not a vowel",n);

getch ();
}

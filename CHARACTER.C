#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("Enter the character:");
scanf("%c",&a);
if(a>=65&&a<=90)||(a>=97&&a<=122))
printf("Character");
else
printf("Not a character");
getch();
}

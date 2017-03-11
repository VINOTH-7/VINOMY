#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("Enter the character:");
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
printf("Vowels");
else
printf("Consonants");
getch();
}

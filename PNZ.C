#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the number:");
scanf("%ld",&a);
if(a>0)
printf("Positive number");
else if(a<0)
printf("Negative number");
else
printf("Zero");
getch();
}

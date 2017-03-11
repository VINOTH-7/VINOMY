#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the number:");
scanf("%d",&a);
if(a%4==0)
printf("Leap year");
else
printf("Not a leap year");
getch();
}

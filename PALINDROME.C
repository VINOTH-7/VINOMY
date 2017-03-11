#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,rem=0,t;
clrscr();
printf("Enter the number:");
scanf("%d",&a);
t=a;
while(t!=0)
{
rem=t%10;
b=(b*10)+rem;
t=t/10;
}
if(a==b)
printf("Palindrome");
else
printf("Not a palindrome");
getch();
}

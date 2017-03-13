#include<stdio.h>
#include<conio.h>
int fun(int);
void main()
{
int X,Y;
clrscr();
printf("Enter the number:");
scanf("%d",&X);
Y=fun(X);
printf("Factorial of %d:%d",X,Y);
getch();
}
int fun(int a)
{
if(a>0)
return a*fun(a-1);
else
return 1;
}

#include<stdio.h>
#include<conio.h>
int fun(int);
void main()
{
int a,b;
clrscr();
printf("Enter the number:");
scanf("%d",&a);
b=fun(a);
printf("Factorial of %d:%d",a,b);
getch();
}
int fun(int x)
{
if(x>0)
return x*fun(x-1);
else
return 1;
}

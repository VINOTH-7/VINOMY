#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,t,rem=0;
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
printf("The reverse of %d is %d",a,b) ;
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a,rem=0,sum=0,t;
clrscr();
printf("Enter the number:");
scanf("%d",&a);
t=a;
while(t!=0)
{
rem=t%10;
sum=sum+(rem*rem*rem);
t=t/10;
}
if(a==sum)
printf("Armstrong number");
else
printf("Not a armstrong number");
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,sum=0;
clrscr();
printf("Enter the start value:");
scanf("%d",&a);
printf("Enter the end value:");
scan("%d",&b);
for(i=a;i<=b;i++)
sum=sum+i;
printf("Sum:%d",sum);
getch();
}

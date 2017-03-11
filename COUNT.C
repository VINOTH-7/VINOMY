#include<stdio.h>
#include<conio.h>
void main()
{
long int a;
int count=0;
clrscr();
printf("Enter the number:");
scanf("%d",&a);
while(a!=0)
{
count++;
a=a/10;
}
printf("Count:%d",count);
getch();
}

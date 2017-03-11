#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j,count=0;
clrscr();
printf("Enter the start and end number:");
scanf("%d%d",&a,&b);
for(i=a+1;i<b;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
break;
}
if(j==i)
count++;
}
printf("count=%d",count);
getch();
}

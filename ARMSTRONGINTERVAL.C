#include<stdio.h>
#include<conio.h>
void main()
{
int rem,sum,t,x,y,i;
clrscr();
printf("Enter the interval:");
scanf("%d%d",&x,&y);
for(i=x+1;i<y;i++)
{
t=i;
rem=0;
sum=0;
while(t!=0)
{
rem=t%10;
sum=sum+(rem*rem*rem);
t=t/10;
}
if(i==sum)
printf("%d\n",i);
}
getch();
}

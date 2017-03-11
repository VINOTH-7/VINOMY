#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
clrscr();
printf("Enter the intervals:");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
if(i%2==0)
printf("%d\n",i);
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a;
clrscr();
printf("Enter the table you want:");
scanf("%d",&n);
printf("Enter the end value of the table:");
scanf("%d",&a);
for(i=1;i<=a;i++)
printf("%d*%d=%d\n",i,n,n*i);
getch();
}

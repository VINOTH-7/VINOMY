#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
printf("Enter the value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
sum=sum+i;
printf("SUM:%d",sum);
getch();
}

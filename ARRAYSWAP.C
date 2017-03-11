#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,j,k,n,temp;
clrscr();
printf("Enter the number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the value to rotate:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
temp=a[n-1];
for(j=n-1;j>0;j--)
{
a[j]=a[j-1];
}
a[j]=temp;
}
for(i=0;i<n;i++)
printf("%d\t",a[i]);
getch();
}

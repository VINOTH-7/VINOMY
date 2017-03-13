#include<stdio.h>
int main()
{
int a[100],i,j,n,temp;
printf("Enter the array size:");
scanf("%d",&n);
prntf("Enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
if(a[i]==i)
printf("%d",a[i]);
}
}

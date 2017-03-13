#include<stdio.h>
int main()
{
int a[100],i,n;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;)
{
i=i+a[i];
if(a[i]==0)
break;
}
if(i>=n||i<n-1)
printf("False");
if(i==n-1)
printf("True");
return 0;
}

#include<stdio.h>
int main()
{
int a[100],n,i,j,target,sum;
printf("Enter the array size:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the target value:");
scanf("%d",&target);
for(i=0;i<n;i++)
{
sum=0;
for(j=i+1;j<n;j++)
{
sum=a[i]+a[j];
if(sum==target){
printf("\n%d+%d=%d",a[i],a[j],sum);
sum=0;
}
}
}
return 0;
}

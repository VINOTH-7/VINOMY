#include<stdio.h>
int fun(int x[],int y,int z);
int main()
{
int a[100],n,i,k;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the values:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the k value:");
scanf("%d",&k);
fun(a,k,n);
return 0;
}
int fun(int x[],int y,int z)
{
int i,j,temp;
for(i=0;i<z;i++)
{
for(j=i;j<z;j++)
{
if(x[i]<x[j])
{
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}
}
printf("Height is:%d",x[y-1]);
return 0;}

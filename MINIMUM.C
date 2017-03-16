#include<stdio.h>
int mini(int a, int k);
int main()
{
int a,k;
printf("Enter the number:");
scanf("%d",&a);
printf("Enter the k value:");
scanf("%d",&k);
printf("Minimum:%d",mini(a,k));
return 0;
}
int mini(int a ,int k)
{
    int b,c;
    if(k<=0)
return a;
    if(a==0)
        return 0;
if(k>0)
{
    b=mini(a/10,k);
b=(b*10)+(a%10);
c=mini(a/10,k-1);
}
if(b<c)
return b;
else
return c;
}

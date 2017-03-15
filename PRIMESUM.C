#include<stdio.h>
int main(){
int a[100],b[100],i,j,sum=0,c=0,rem,t,d=0;
printf("Prime numbers between 1 to 100");
for(i=2;i<=100;i++)
{
for(j=2;j<=i;j++)
    if(i%j==0)
        break;
if(i==j)
{
    a[c]=i;
    c++;
}
}
for(i=0;i<c;i++)
{
    t=a[i];
    sum=0;
    while(t!=0)
    {
        rem=t%10;
        sum=sum+rem;
        t=t/10;
    }
    for(j=0;j<c;j++)
    {
        if(sum==a[j])
        {
            b[d]=sum;
            d++;
        }
    }
}
printf("\nPrime numbers:");
for(i=0;i<c;i++)
    printf("%d\t",a[i]);
for(i=0;i<d;i++)
{
    for(j=1;j<d;j++)
    {
        if(b[i]==b[j])
        {
            for(c=j;c<d;c++)
            b[c]=b[c+1];
            d--;
        }
    }
}
printf("\nRepeated prime numbers:");
for(i=0;i<d;i++)
printf("%d\t",b[i]);
return 0;
}

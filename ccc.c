#include<stdio.h>
int main()
{
int i,sum=0;
for(i=10;i>-5;i--)
{
if(i<1)
sum=sum+i;
else
sum=i;
}
printf("%d",sum);
return 0;
}

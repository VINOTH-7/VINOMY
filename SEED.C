#include<stdio.h>
int main()
{
int num,seed=1,i,product=1,fact,rem;
printf("Enter the number:");
scanf("%d",&num);
while(seed<=num)
{
if(num%seed==0)
{
fact=seed;
product=fact;
while(fact!=0)
{
rem=fact%10;
fact=fact/10;
product*=rem;
}
if(product==num)
printf("\nThe seed of %d is:%d",num,seed);
}
seed++;
}
}

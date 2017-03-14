#include<stdio.h>
int main()
{
long int a;
int rem,b,t,sum=0;
printf("Enter the digits");
scanf("%ld",&a);
t=a;
while(t!=0)
{
rem=t%10;
sum=sum+rem;
t=t/10;
}
if(sum==a)
printf("Palindrome");
else
printf("Not a palindrome");
return 0;
}

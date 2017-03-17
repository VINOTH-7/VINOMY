#include<stdio.h>
#include<string.h>
int main()
{
char a[100],i,j,k,b;
printf("Enter the string:");
gets(a);
b=strlen(a);
for(i=0;i<b;i++)
{
for(j=i+1;j<b;j++)
{
if(a[i]==a[j])
{
for(k=j;k<b;k++)
a[k]=a[k+1];
b--;
j--;
}
}
}
printf("\n%s",a);
return 0;
}

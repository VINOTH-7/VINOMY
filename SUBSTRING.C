#include<stdio.h>
int main()
{
char a[100];
int i,x,y;
printf("Enter the string:");
scanf("%s",&a);
printf("Enter the start and end point:");
scanf("%d%d",&x,&y);
for(i=x;i<=y;i++)
printf("%c",a[i]);
return 0;
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int count=0,j=0,i;
clrscr();
printf("Enter the string:");
scanf("%s",&a);
for(i=0;i<100;i++)
{
if(a[i]=='\0')
break;
else
count++;
}
for(i=count-1;i>=0;i--)
{
b[j]=a[i];
j++;
if(i==0)
b[j]='\0';
}
printf("Reversed string:%s",b);
for(i=0;i<count;i++)
{
if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
{
for(j=i;j<count;j++)
{
b[j]=b[j+1];
}
count--;
i--;
}
}
printf("\n%s",b);
getch();
}

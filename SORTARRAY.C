#include <stdio.h>

int main(void) {
	// your code goes here
	int a[100],i,j,n,max,min;
	//printf("Enter the array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		else
		break;
	}
	min=a[0];
	for(j=1;j<n;j++)
	{
		if(a[j]<min)
		min=a[j];
		else
		break;
	}
	if(i==n||j==n)
	printf("Sorted List");
	else
	printf("Unsorted list");
	return 0;
}

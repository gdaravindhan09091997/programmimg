#include<stdio.h>
int main()
{
	int a[50],i,n;
	printf("Enter the array size");
	scanf("%d",&n);
	printf("Enter the array numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
 
	}
	for(i=0;i<n;i++)
	{
		printf("The number and its position is %d  %d",a[i],i);
 
	}
	return 0;
}

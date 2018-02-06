#include<stdio.h>
int main()
{
	int a[100],n,i,greater;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		
	
		scanf("%d",&a[i]);
	}
	greater=a[0];
for(i=0;i<n;i++)
{
	if(a[i]>greater)
	{
		greater=a[i];
	}
}
printf("The largest element in the array is %d",greater);
return 0;
}

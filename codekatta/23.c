#include<stdio.h>
int main()
{
	int a[100],n,i,smaller;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	smaller=a[0];
for(i=0;i<n;i++)
{
	if(a[i]<smaller)
	{
		smaller=a[i];
	}
}
printf("The smallest element in the array is %d",smaller);
return 0;
}

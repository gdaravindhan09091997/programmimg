#include<stdio.h>
int main()
{
	int n,i,a[100],largest,smallest;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	largest=smallest=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>largest)
		largest=a[i];
		if(a[i]<smallest)
		smallest=a[i];
	}
	printf("%d is the largest number in the array\n",largest);
	printf("%d is the smallest number in the array\n",smallest);
	return 0;
}

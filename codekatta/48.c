#include<stdio.h>
int main()
{
	int n,a[100],i,sum=0;
	float avg;
	printf("Enter the total number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("The average value is %.2f",avg);
	return 0;
	
}

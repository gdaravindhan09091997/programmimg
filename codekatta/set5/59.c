#include<stdio.h>
int main()
{
	int a[10],i,max;
	printf("Enter the numbers\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<=9;i++)
	{
	if(a[i]>max)
	{
		max=a[i];
	}}
	printf("The largest value is %d",max);
	return 0;
}

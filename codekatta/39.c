#include<stdio.h>
int main()
{
	int a[10],i,greatest;
	printf("Enter the numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	greatest=a[0];
	for(i=0;i<10;i++)
	{
	if(a[i]>a[0])
	{
		greatest=a[i];
	}
	}
	printf("%d is the largest number",greatest);

return 0;

}

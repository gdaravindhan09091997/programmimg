#include<stdio.h>
int main()
{
	int i,a,b[100],sum=0;
	printf("Enter the limit\n");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
			printf("%d\n",b[i]);
	}
	for(i=0;i<a;i++)
	{
		sum=sum+b[i];
	}
printf("%d",sum);

	
	return 0;
}

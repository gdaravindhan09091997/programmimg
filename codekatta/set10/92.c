#include<stdio.h>
int main()
{
	int i,m,n[100],sum=0;
	printf("Enter the limit\n");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
			printf("%d\n",n[i]);
	}
	for(i=0;i<m;i++)
	{
		sum=sum+n[i];
	}
printf("%d",sum);

	
	return 0;
}

#include<stdio.h>
int main()
{
	int n,t1=0,t2=1,i,nextterm;
	printf("Enter the limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",t1);
		nextterm=t1+t2;
		t1=t2;
		t2=nextterm;
	}
	return 0;
}

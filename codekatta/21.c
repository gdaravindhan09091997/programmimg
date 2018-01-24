#include<stdio.h>
int main()
{
	int a,n,d,sum=0,i;
	scanf("%d",&a);
	scanf("%d",&n);
	scanf("%d",&d);
	for(i=n;i<=a;i=i+d)
	{
		sum=sum+d*i;
	}
	printf("%d",sum);
	
	return 0;
}

#include<stdio.h>
int main()
{
	int a,count=1;
	printf("Enter the number\n");
	scanf("%d",&a);
	while(a!=0)
	{
	count++;
	a=a/10;
	}
	printf("There are %d digits",count);
	return 0;
}

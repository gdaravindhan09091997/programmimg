#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the base\n");
	scanf("%d",&a);
	printf("Enter the power\n");
	scanf("%d",&b);
	c=pow(a,b);
	printf("%d^%d=%d",a,b,c);
	return 0;
}

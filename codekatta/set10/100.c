#include<stdio.h>
int main()
{
	int a,b=1;
	printf("Enter the number\n");
	scanf("%d",&a);
	while(a!=0)
	{
		b=b*(a%10);
		a=a/10;
	}
	printf("The product of the digits is %d",b);
	return 0;
}

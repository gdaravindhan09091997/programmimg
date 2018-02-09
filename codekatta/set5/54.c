#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the two numbers\n");
	scanf("%d %d",&a,&b);
	c=a*b;
	printf("The product of two numbers is %d\n",c);
	if(c%2==0)
	printf("Even");
	else
	printf("odd");
	return 0;
}

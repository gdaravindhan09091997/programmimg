#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two numbers\n");
	scanf("%d %d",&a,&b);
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("The numbers after swapping are %d %d\n",a,b);
	return 0;
}

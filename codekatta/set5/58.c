#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two numbers\n");
	scanf("%d %d",&a,&b);
	printf("The numbers before swapping are %d %d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("The numbers after swapping are %d %d",a,b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	while(a%10!=0)
	{
		a=++a;
	}
	printf("The nearest multiple of 'a' is %d",a);
	return 0;
}

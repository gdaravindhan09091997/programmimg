#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number");
	scanf("%d",&a);
	if(a%7==0)
	printf("%d is a multiple of 7",a);
	else
	printf("%d is not a multiple of 7",a);
	return 0;
}

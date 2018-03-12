#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the numbers");
	scanf("%d %d %d",&a,&b,&c);
	d=(a*b)%c;
	printf("The value is %d",d);
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the two numbers\n");
	scanf("%d %d",&a,&b);
	c=a-b;
	printf("The differrence between two numbers is %d\n",c);
	int d;
	d=c%2;
	if(d==0)
	printf("%d is an even number\n",c);
	else
	printf("%d is an odd number",c);
	return 0;
}

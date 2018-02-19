#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the two nummbers\n");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("The sum is %d\n",c);
	if(c%2==0)
	printf("%d is an even number\n",c);
	else
	printf("%d is an odd number",c);
	return 0;
}

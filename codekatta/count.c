#include<stdio.h>
int main()
{
	int count=0,a;
	printf("Enter the number:\n");
	scanf("%d",&a);
	while(a>0)
	{
		a=a/10;
		count=count+1;
		
	}
	printf("The number of digits is %d",count);
	return 0;
}

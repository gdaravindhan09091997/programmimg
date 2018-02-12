#include<stdio.h>
int main()
{
	int g,a=-1,b=1,c,i;
	printf("Enter the total numbers");
	scanf("%d",&g);
	for(i=0;i<g;i++)
	{
	c=a+b;
	a=b;
	b=c;
		printf("Fibonacci series is %d\n",c);
	}

	return 0;
	
}

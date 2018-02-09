#include<stdio.h>
int main()
{
	int a,n,sum=0,temp;
	printf("Enter the digits\n");
	scanf("%d",&a);
	temp=a;
	while(a!=0)
	{
		n=a%10;
		sum=sum+n;
		a=a/10;
	}
	printf("The entered digit is %d\n",temp);
	printf("The sum of the numbers is %d",sum);
	return 0;
}

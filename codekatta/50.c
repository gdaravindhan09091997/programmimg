#include<stdio.h>
int main()
{
	int a,temp,flag=0;
	printf("Enter the number");
	scanf("%d",&a);
	temp=a;
	while(temp!=1)
	{
		if(temp%2!=0)
		{
			flag= 1;
			break;
		}
		temp=temp/2;
	}
	if(flag==0)
	printf("%d is a power of two",a);
	else
	printf("%d is not a power of two",a);
	return 0;
}

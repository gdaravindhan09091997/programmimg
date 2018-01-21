#include<stdio.h>
int main()
{
	int a,temp,r,sum=0;
	printf("Enter the number:\n");
	scanf("%d",&a);
	temp=a;
	while(a>0)
	{
r=a%10;
sum=sum+r*r*r;
a=a/10;
	}
	if(temp==sum)
	printf("Yes %d is an armstrong number\n",temp);
	else
	printf("No %d is not an armstrong number",temp);
	return 0;
	
}

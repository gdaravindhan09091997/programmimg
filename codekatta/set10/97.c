#include<stdio.h>
int main()
{
	int n,revno,remainder;
	printf("Enter the number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		remainder=n%10;
		revno=revno*10+remainder;
		n=n/10;
	}
	printf("The reversed no is %d",revno);
	return 0;
}

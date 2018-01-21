#include<stdio.h>
int main()
{
	int a,b,i;
	printf("Enter the lower range:\n");
	scanf("%d",&a);
	printf("Enter the upper range:\n");
	scanf("%d",&b);
	printf("Odd numbers from the range %d to %d are",a,b);
	for(i=a;i<=b;i++)
	{
	if(i%2==1)
	printf("%d\n",i);
	}
	
}

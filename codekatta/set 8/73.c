#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the number\n");
	scanf("%d",&a);
	printf("Enter the range\n");
	scanf("%d %d",&b,&c);
	if((a>b)&&(a<c))
	printf("Yes");
	else
	printf("No");
	return 0;
}

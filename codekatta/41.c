#include<stdio.h>
int main()
{
	int a,i;
	char b[100];
	printf("Enter the number of times you want to print\n");
	scanf("%d",&a);
	printf("Enter the string\n");
	gets(b);
	for(i=1;i<=a;i++)
	{
		puts(b);
		printf("\n");
	}
	return 0;
}

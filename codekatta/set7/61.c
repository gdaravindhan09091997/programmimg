#include<stdio.h>
int main()
{
	char a[100];
	printf("Enter the string\n");
	fgets(a,100,stdin);
	int i,k;
	printf("Enter the letters you want to print\n");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("%c",a[i]);
	
	}
	return 0;
}

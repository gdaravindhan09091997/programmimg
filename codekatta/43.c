#include<stdio.h>
int main()
{
	char a[100],b[100];
	printf("Enter the first word\n");
	scanf("%s",a);
	printf("Enter the second word\n");
	scanf("%s",b);
	printf("The concatenated string is %s%s",a,b);
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int m,n;
	printf("Enter the two words\n");
	scanf("%s %s",&a,&b);
	m=strlen(a);
	n=strlen(b);
	if(m=>n)
	{
		printf("%s\n",a);
	}
	else
	printf("%s",b);
	return 0;
}

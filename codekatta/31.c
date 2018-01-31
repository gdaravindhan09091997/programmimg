#include<stdio.h>

int main()
{
	int b;
	char a[100]="laptop is good";
	b=strlen(a)-strlen("\t\t");
	printf("The string length is %d",b);
	return 0;
}

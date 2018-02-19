#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("Enter the string");
	gets(a);
	int n,i,count=0;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if((a[i]>='0')&&(a[i]<='9'))
		count++;
	}
	printf("There are %d numbers",count);
	return 0;
	
}

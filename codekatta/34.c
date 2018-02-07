#include<stdio.h>
int main()
{
	char a[200];
	printf("Enter the line\n");
	gets(a);
	int i=0,b=0,c=1;
	while(a[i]!=NULL)
	{
		if(a[i]=='.')
		{
			b=++c;
		}
		i++;
	}
	printf("There are %d lines",b);
	return 0;
}

#include<stdio.h>
int main()
{
	char a[100];
	printf("Enter the sentence\n");
	gets(a);
	int i,count=1;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		count++;
	}
	printf("There are %d words",count);
	return 0;
}

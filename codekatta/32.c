#include<stdio.h>
int main()
{
	char a[100];
	int i=0,word=1;
	printf("Enter the string");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]==' ')
		{
			word=word+1;
		}
		i++;
	}
	printf("There are %d words in the line",word);
	return 0;
	
}

#include <stdio.h>
int main()
{
	char g[60];
	int i=0,a=0,b=0,c=0;
	printf("enter the input\n");
	gets(g);
	while(g[i]!='\0')
	{
	if((g[i]>='a'&&g[i]<='z')||(g[i]>='A'&&g[i]<='Z'))
	{
		a++;
	}
	else if((g[i]>='0'&&g[i]<='9'))
	{
		b++;
	}
	else
	{
		c++;
	}
	i++;
	}
	
 printf("no of special character %d",c);
	return 0;
}

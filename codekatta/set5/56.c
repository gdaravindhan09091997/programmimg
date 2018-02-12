#include<stdio.h>
int main()
{
	char a[100];
	printf("Enter the string\n");
	gets(a);
	if(((a>='a')||(a<='z'))&&((a>='A')||(a<='Z'))&&((a>=0)||(a<=9)))
	printf("Yes");
	else 
	printf("No");
	return 0;
}

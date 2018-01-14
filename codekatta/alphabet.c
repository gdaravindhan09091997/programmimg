#include<stdio.h>
int main()
{
	char letter;
	printf("Enter the letter:\n");
	scanf("%c",&letter);
	if(letter>='a'&&letter<='z')
	printf("It is an alphabet");
	else if(letter>='A'&&letter<='Z')
	printf("It is an alphabet");
	else
	printf("It is not an alphabet");
	return 0;
}

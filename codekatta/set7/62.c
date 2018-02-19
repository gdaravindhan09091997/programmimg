#include <stdio.h>
#include<string.h>
int main() 
{
	char c[100];
	int n,i,num,count=0;
	scanf("%s",c);
	n=strlen(c);
	for(i=0;i<n;i++)
	{
	    if(c[i]=='0'||c[i]=='1')
	    {   
	        count++;
	    }
	    else
	    {
	       printf("no..");
	       break;
	    }
	}
	if(n==count)
	{
	     printf("yes...it is in binary representation");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int c[50],n,i,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&c[i]);
    s=c[0];
    for (i=1;i<n;i++)
    {
        if(s>c[i])
            s= c[i];
    }
    printf("%d",s);
    return 0;
}

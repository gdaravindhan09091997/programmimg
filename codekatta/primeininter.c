#include<stdio.h>
int main()
{
    int a,b,n,k,num=0;
    printf("Enter the interval");
    scanf("%d %d",&a,&b);
    for(n=a;n<=b;n++)
    {
        for(k=2;k<=n/2;n++)
        {
            if(n%k==0)
            {
                num++;
                break ;
            }
        }
        if(num==0)
        printf("%d",n);
    }
    return 0;
}

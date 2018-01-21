#include<stdio.h>
int main()
{
    int a,c=0,temp;
    printf("Enter the number:\n");
    scanf("%d",&a);
    temp=a;
    while(temp!=0)
    {
        c=c*10;
        c=c+temp%10;
        temp=temp/10;
    }
    if(a==c)
    printf("Yes %d is a palidrome",a);
    else
    printf("No %d is not a palindrome",a);
    return 0;
}

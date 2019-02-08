#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        printf("Positive");
    }else if(n==0)
    {
        printf("Zero");
    }else if(n<0)
    {
        printf("Negative");
    }else
    {
        printf("Invalid Input");
    }
    return 0;
}

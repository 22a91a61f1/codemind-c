#include<stdio.h>
int main()
{
    int n,r=0,m;
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        r=r*10+(m%10);
        m=m/10;
    }
    if(n==r)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
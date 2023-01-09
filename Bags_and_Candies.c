#include<stdio.h>
int main()
{
    int n,k,m,b;
    scanf("%d%d%d",&n,&k,&m);
    b=k*m;
    int x=n/b;
    int y=(n/b)+1;
    if(n%b==0)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",y);
    }
}
#include<stdio.h>
int main()
{
    int n,s=0,m,i,a,b;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    for(i=n;i<=m;i++)
    {
        if(i%a==0 && i%b!=0)
        {
            s=s+i;
        }
    }
    printf("%d",s);
}
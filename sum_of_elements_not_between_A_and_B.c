#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(a[i]<x)
        {
            s=s+a[i];
        }
        //printf("%d",s);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>y)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}
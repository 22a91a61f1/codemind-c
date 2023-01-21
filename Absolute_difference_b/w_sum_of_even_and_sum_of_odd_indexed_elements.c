#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[n],s=0,p=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            p=p+a[i];
        }
    }
    k=abs(s-p);
    printf("%d",k);
}
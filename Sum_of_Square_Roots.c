#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    float k,s=0;
    for(i=n;i<=m;i++)
    {
        k=sqrt(i);
        s=s+k;
    }
    printf("%.2f",s);
}
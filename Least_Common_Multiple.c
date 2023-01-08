#include<stdio.h>
int main()
{
    int l,i,u;
    scanf("%d%d",&l,&u);
    for(i=1;i<=u;i++)
    {
        if((l*i)%u==0)
        {
            printf("%d",l*i);
            break;
        }
    }
}
#include<stdio.h>
int main()
{
    int a,b,n,rev=0,r,revt=0,rt;
    scanf("%d",&n);
    a=n*n;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    b=rev*rev;
    while(b>0)
    {rt=b%10;
    revt=revt*10+rt;
    b=b/10;
    }
    if(a==revt)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
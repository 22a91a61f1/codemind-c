#include<stdio.h>
int main()
{
    int a,y,w;
    scanf("%d",&a);
    y=a/365;
    w=a-(y*365);
    w=w/7;
    printf("%d
%d",y,w);
}
#include<stdio.h>
int main()
{
    long int a,b,i,s=0;
    scanf("%ld",&a);
    for(i=a;i>0;i=i/10)
    {
        b=i%10;
        s++;
    }
    if(s==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}
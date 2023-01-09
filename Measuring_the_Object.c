#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if(x+y==w || w==y+z || z+x==w || w==x || w==y ||w==z)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
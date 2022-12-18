#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s;
    scanf("%f%f%f",&a,&b,&c);
    float area;
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",area);
}
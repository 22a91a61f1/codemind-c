#include<stdio.h>
int main()
{
    int un;
    float c,b,t,s;
    scanf("%d",&un);
    if(un<200)
    {
        c=1.20;
    }
    else if(un>=200 && un<400)
    {
        c=1.40;
    }
    else if(un>=400 && un<600)
    {
        c=1.60;
    }
    else if(un>=600 && un<800)
    {
        c=1.80;
    }
    else
    {
        c=2.00;
    }
    b=un*c;
    if(b>400)
    {
        s=b*0.15;
        t=b+s;
    }
    else
    {
        s=0.00;
        t=b;
    }
    printf("Units Consumed: %d
",un);
    printf("Cost per Unit: %.2f
",c);
    printf("Bill: %.2f
",b);
    printf("Surcharge: %.2f
",s);
    printf("Total Amount: %.2f
",t);
}
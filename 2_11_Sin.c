#include <stdio.h>
#include <math.h>
#define pi 3.14159265359

int main ()
{
    int A,count=0,breaker=0,breaker2=0;
    double x,y,div=1,div2=3,dif,fac=1,fac2=1,c,c2;

    printf("Enter an angle in degrees: ");
    scanf("%lf",&x);
    x=(x*pi)/180;


    while (breaker2==0)
    {
        printf("Enter how many times: ");
        scanf("%d",&A);
        if (A>=5)
        {
            breaker2=1;
        }
        else
        {
            breaker=0;
        }
    }

    while (count<=A)
    {
        div+=2;
        div2+=2;

        for(c=1;c<=div;c++)
        {
            fac=fac*c;
        }

        for(c2=1;c2<=div2;c2++)
        {
            fac2=fac2*c2;
        }

        y+=(-(pow(x,div))/(fac))+((pow(x,div2))/(fac2));
        div+=2;
        div2+=2;
        count++;
    }
    dif=(x+y)-sin(x);
    printf("sin(%f)=%f\n",((x*180)/pi),x+y);
    printf("The difference between this value and the actual value is %f\n",dif);

    return 0;
}

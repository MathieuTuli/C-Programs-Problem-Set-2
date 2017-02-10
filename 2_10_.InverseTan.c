#include <stdio.h>
#include <math.h>

int main ()
{
    int A,count=0,breaker=0,breaker2=0;
    double x,y,div=1,div2=3;

    while (breaker==0)
    {
        printf("Enter a number between -1.0 and 1.0: ");
        scanf("%lf",&x);

        if (-1.0<x && x<1.0)
        {
            breaker=1;
        }
        else
        {
            breaker=0;
        }
    }

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
        y+=((pow(x,div))/(div))+((pow(x,div2))/(div2));
        div+=2;
        div2+=2;
        count++;
    }
    printf("tanh(x)=%f",x+y);

    return 0;
}

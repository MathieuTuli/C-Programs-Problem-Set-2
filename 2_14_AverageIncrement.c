#include <stdio.h>

int main()
{
    int A,B,C=0,count=0,breaker=0,stop=0;
    double D;

    do
    {
        printf("Enter and Integer: ");
        scanf("%d",&A);
        B=A;
        breaker=1;
    }while (breaker==0);
    do
    {
        printf("Enter an Integer: ");
        scanf("%d",&A);
        if (A>=B)
        {
            C+=A-B;
            count++;
        }
        else
        {
            break;
        }
        B=A;
    }while(stop==0);
    D=C;

    printf("The average increment is %.3f",D/count);

    return 69;
}

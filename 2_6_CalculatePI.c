#include <stdio.h>

int main ()
{
    int A,count=0;
    double pi=4,pii,div=1,div2=3;

    printf("Enter an integer to approximate to: ");
    scanf("%d",&A);

    while (count<=A)
    {
        div+=2;
        div2+=2;
        pii+=(-4/(div))+(4/(div2));
        div+=2;
        div2+=2;
        count++;
    }
    printf("%f",pi+pii);

    return 0;
}

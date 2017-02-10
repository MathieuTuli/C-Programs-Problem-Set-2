#include <stdio.h>
#include <math.h>

int main()
{
    int n,n1,A=0,B=1,breaker=0,C,D;

    while(breaker==0)
    {
        printf("Enter the lower boundary: ");
        scanf("%d",&n);
        printf("Enter the upper boundary: ");
        scanf("%d",&n1);
        if (n>0 && n1>0 && n1>n)
        {
            breaker=1;
        }
        else
        {
            breaker=0;
        }
    }
      for (D=0;D<n-1;D++)
        {
            if (D<=1)
            {
                C=D;
            }
            else
            {
                C=A+B;
                A=B;
                B=C;
            }

        }
        for (D=n;D<=n1;D++)
        {
                C=A+B;
                A=B;
                B=C;

            printf("%d \n",C);

        }

    return 69;
}


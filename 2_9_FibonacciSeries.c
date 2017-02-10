#include <stdio.h>
#include <math.h>

int main()
{
    int n,A=0,B=1,C,D;
    printf("Enter a value for n: ");
    scanf("%d",&n);

    for (D=0;D<n;D++)
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
        printf("%d ",C);

    }

    return 69;
}

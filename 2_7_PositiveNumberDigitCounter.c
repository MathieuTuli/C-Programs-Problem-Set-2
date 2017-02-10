#include <stdio.h>

int main()
{
    int A,count=0;

    printf("Enter a positive integer : ");
    scanf("%d",&A);



    if (A==0)
    {
        printf("Not zero\n\n");
    }
    else if (A<0)
    {
        printf("A positive integer\n\n");
    }
    else
    {
        while (A!=0)
        {
            A=A/10;
            ++count;
        }
    }

    printf("%d digits\n\n",count);

    return 69;
}


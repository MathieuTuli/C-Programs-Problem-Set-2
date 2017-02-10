#include <stdio.h>

int main()
{
    int A,B,C,D;

    printf("Enter the hour: ");
    scanf("%d",&A);

    printf("Enter the minute: ");
    scanf("%d",&B);

    printf("AM (Type: 1) or PM (Type: 2)? ");
    scanf("%d",&C);

    if (C==1 && A<=12 && B<60)
    {
        if (A==12)
        {
            A=(A-12);
            printf("%.2d:%.2d",A,B);
        }
        else
        {
            printf("%.2d:%.2d",A,B);
        }
    }
    else if (C==2 && A<=12 && B<60)
    {
        if (A==12)
        {
            printf("%.2d:%.2d",A,B);
        }
        else
        {
            A=A+12;
            printf("%.2d:%.2d",A,B);
        }

    }
    else
    {
        printf("Wrong.");
    }

    return 69;
}


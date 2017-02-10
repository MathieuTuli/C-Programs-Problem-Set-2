#include <stdio.h>

int main()
{
    double cost, gave, change, due;
    printf("What is the cost?: ");
    scanf("%lf",&cost);

    printf("How much are you giving?: ");
    scanf("%lf",&gave);

    change=(cost-gave);

    if (change<=0)
    {
        printf("Your change is $%.2f",-change);
    }
    else
    {
        printf("You still owe $%.2f",change);
    }

    return 0;
}

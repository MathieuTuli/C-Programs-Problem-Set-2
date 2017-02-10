#include <stdio.h>

int main()
{
    int day,month,i=1;

    printf("How many days?: ");
    scanf("%d",&month);

    printf("What day is it? (1=Sunday...7=Saturday): ");
    scanf("%d",&day);
    for(i=1;i<day;i++)
        {
            printf("    ");
        }
    i=1;
    while(i<=month)
    {
        printf("%3d ",i);
        if ((day-1+i)%7==0)
        {
            printf("\n");
        }
        i++;
    }

    return 0;
}

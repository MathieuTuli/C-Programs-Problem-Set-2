#include <stdio.h>

int main()
{
    int num;
    int count1=0;
    int count2=0;
    int term=0;

    while (term==0)
    {
        printf("Enter a positive or negative integer");
        scanf("%d",&num);
        if (num>0)
        {
            ++count1;
        }
        else if (num<0)
        {
            ++count2;
        }
        else
        {
            term=1;
        }
    }
    printf("%d positive interger(s) and %d negative integer(s)",count1,count2);

    return 0;
}

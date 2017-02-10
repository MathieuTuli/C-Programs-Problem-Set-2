#include <stdio.h>
#include <math.h>

int main()
{
    int n,count,total=0;

    printf("Enter a value for n: ");
    scanf("%d",&n);

    for (count=1;count<=n;count+=2)
    {
        total+=count;
    }
    printf("%d",total);


    return 69;
}


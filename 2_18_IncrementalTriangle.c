#include <stdio.h>

int main()
{
    int n,i,j,k,h;

    printf("Enter an integer from 1-9: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        h=i;
        k=1;
        while(k<=i)
        {
            printf("%d",h);
            k++;
            h++;
             if(h%9==0)
                h=0;
        }
        printf("\n");
    }
    return 0;
}

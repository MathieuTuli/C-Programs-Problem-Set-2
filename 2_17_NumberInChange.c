#include <stdio.h>

int main()
{
    int num,coin=0,sum=0,A=0,i;

    do
    {
        printf("Enter a positive integer greater than 0: ");
        scanf("%d",&num);
    }while(num<=0);

   for(i=7;i>=1;i-=2)
   {
        coin=num/i;
        sum+=coin*i;

        num=num%i;

        printf("%d %d-cent coints: %d\n",coin,i,sum);
   }

    return 69;
}

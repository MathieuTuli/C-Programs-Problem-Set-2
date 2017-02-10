#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num,guess,breaker=0,logic=0,i=0;
    srand((unsigned)time(NULL));
    num=rand()%100+1;

    while (breaker==0)
    {
        printf("\nEnter an integer between 1 and 100: ");
        scanf("%d",&guess);

        if (logic==guess) printf("No! You already entered that number. Try again.\n");
        else if(guess<logic && i==2) printf("No! Remember I said my number was greater than %d. Try again.\n",logic);
        else if(guess>logic && i==1) printf("No! Remember I said my number was smaller than %d. Try again.\n",logic);
        else
        {
            if(guess<=0 || guess>100) printf("No. A number between 1 and 100.\n");
            else
            {
                if (guess>num)
                {
                    printf("My number is less than %d. Guess again.\n",guess);
                    i=1;
                }
                else if (guess<num)
                {
                    printf("My number is higher than %d. Guess again.\n",guess);
                    i=2;
                }
                else if (guess==num)
                {
                    printf("\nYou got it!!!\n");
                    breaker=1;
                }
            }
        }
        logic=guess;
    }

    return 69;
}

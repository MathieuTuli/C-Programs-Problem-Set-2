#include <stdio.h>

int main ()
{
    int min=0,sec=0,hour=0,breaker=0,summ=0,sums=0,count=0,ext,ext2;

    while (breaker==0)
    {
        printf("Enter the length of the song (min:sec)--->");
        scanf("%d:%d",&min,&sec);
        if (sec<0 || sec>60)
        {
            printf("Invalid input:\n");
        }
        else if (min<0)
        {
            breaker=1;
        }
        else if (min>=0 && sec>0 && sec<60)
        {
            summ+=min;
            count++;
            sums+=sec;
        }
    }
    ext=sums/60;
    sums=sums-(ext*60);

    summ=summ+ext;
    ext2=summ/60;
    hour=ext2;
    summ=summ-(ext2*60);
    printf("The total length of the %d songs is--> %d:%d:%d",count,hour,summ,sums);

    return 69;
}

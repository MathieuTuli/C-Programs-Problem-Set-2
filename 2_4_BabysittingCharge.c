#include <stdio.h>
#include <math.h>

int main()
{
    int starth,startm,endh, endm;

    printf("Enter a start time (6:00pm to 5:59am): ");
    scanf("%d %d",&starth,&startm);

    printf("Enter an end time (6:00pm to 5:59am): ");
    scanf("%d %d",&endh,&endm);

    if (starth>=1 && starth<=12 && endh >=1 && endh<=12 && startm>=0 && startm <=59 && endm>=0 && endm<=59)
    {
        double totalTime;
        int startMinuteDif;
        int endMinuteDif;
        if(starth<=5){
            startMinuteDif=(6*60)+(starth*60)+startm;
        }
        else if(starth==12){
            startMinuteDif=(6*60)+startm;
        }
        else{
            startMinuteDif=(starth*60)-(6*60)+startm;
        }
        if(endh<=5){
            endMinuteDif=(6*60)+(endh*60)+endm;
        }
        else if(endh==12){
            endMinuteDif=(6*60)+endm;
        }
        else{
            endMinuteDif=(endh*60)-(6*60)+endm;
        }
        totalTime=endMinuteDif-startMinuteDif;
        totalTime/=60;
        printf("%d  %d",startMinuteDif,endMinuteDif);
        printf("The charge is: $%lf",((double)totalTime)*4.50);
    }
    else
    {
        printf("Try Again.");
    }
    return 0;
}

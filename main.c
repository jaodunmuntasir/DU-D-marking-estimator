#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bangmarks, engmarks, gkmarks, bangtotal, engtotal, gktotal, pass, totalmarks, totalquestion;
    float bangla, english, gk, bangnegative, engnegative, gknegative, negative, bangpercent, engpercent, gkpercent, total, totalpercent, totalnegative;

    printf("How many Question were there in Bengali? \n");
    scanf("%d", &bangtotal);

    do
    {
        printf("How many questions did you answer correctly on Bengali? \n");
        scanf("%d", &bangmarks);
    } while(bangmarks < 0 || bangmarks > bangtotal);

    printf("How many Question were there in English? \n");
    scanf("%d", &engtotal);

    do
    {
        printf("How many questions did you answer correctly on English? \n");
        scanf("%d", &engmarks);
    } while(engmarks < 0 || engmarks > engtotal);

    printf("How many Question were there in General Knowledge? \n");
    scanf("%d", &gktotal);

    do
    {
        printf("How many questions did you answer correctly on General Knowledge? \n");
        scanf("%d", &gkmarks);
    } while(gkmarks < 0 || gkmarks > gktotal);

    printf("What was the negative marking? \n");
    scanf("%f", &negative);

    bangnegative = (bangtotal - bangmarks) * negative;
    bangla = bangmarks - bangnegative;

    engnegative = (engtotal - engmarks) * negative;
    english = engmarks - engnegative;

    gknegative = (gktotal - gkmarks) * negative;
    gk = gkmarks - gknegative;

    printf("What is the pass percentage? \n");
    scanf("%d", &pass);

    bangpercent = (bangla / bangtotal) * 100;
    printf("\n\nYour Bengali Score Percentage is %.2f percent \n", bangpercent);

    if(bangpercent > pass)
    {
        printf("Your Final Score for Bengali is %.2f.\n\n CONGRATS! You have Passed Bengali. \n\n\n", bangla);
    }

    else
    {
        printf("Your Final Score for Bengali is %.2f.\n\n ALAS! You have Failed Bengali. \n\n\n", bangla);
    }

    engpercent = (english / engtotal) * 100;
    printf("Your English Score Percentage is %.2f percent \n", engpercent);

    if(engpercent > pass)
    {
        printf("Your Final Score for English is %.2f.\n\n CONGRATS! You have Passed English. \n\n\n", english);
    }

    else
    {
        printf("Your Final Score for English is %.2f.\n\n ALAS! You have Failed English. \n\n\n", english);
    }

    gkpercent = (gk / gktotal) * 100;
    printf("Your General Knowledge Score Percentage is %.2f percent \n", gkpercent);

    if(gkpercent > pass)
    {
        printf("Your Final Score for General Knowledge is %.2f.\n\n CONGRATS! You have Passed General Knowledge. \n\n\n", gk);
    }

    else
    {
        printf("Your Final Score for General Knowledge is %.2f.\n\n ALAS! You have Failed General Knowledge. \n\n\n", gk);
    }

    totalquestion = bangtotal + engtotal + gktotal;
    totalmarks = bangmarks + engmarks + gkmarks;
    totalnegative = bangnegative + engnegative + gknegative;
    total = bangla + english + gk;
    totalpercent = (total / totalquestion) * 100;

    printf("\t\tSCORESHEET\n\n\n");
    printf("Total Given Question = %d \n\n", totalquestion);
    printf("Total Correct Answer = %d \n\n", totalmarks);
    printf("Total Marks Deducted for Negative Marking = %.2f \n\n", totalnegative);
    printf("Total Obtained Marks = %.2f \n\n", total);
    printf("Percentage of Final Marks = %.2f \n\n\n\n", totalpercent);

    if (bangpercent <= pass && engpercent <= pass && gkpercent <= pass)
        printf("SORRY! You have Failed All the subjects. \n\n You have Failed Overall. Good Luck Next Time.\n\n\n");
    else if (bangpercent <= pass && engpercent <= pass)
        printf("SORRY! You have Failed Bengali and English. \n\n You have Failed Overall. Good Luck Next Time.\n\n\n");
    else if (engpercent <= pass && gkpercent <= pass)
        printf("SORRY! You have Failed English and General Knowledge. \n\n You have Failed Overall. Good Luck Next Time.\n\n\n");
    else if (bangpercent <= pass && gkpercent <= pass)
        printf("SORRY! You have Failed Bengali and General Knowledge. \n\n You have Failed Overall. Good Luck Next Time.\n\n\n");
    else if(bangpercent <= pass)
        printf("SORRY! You have failed Bengali.\n\n You have Failed Overall. Good Luck Next Time.\n\n\n");
    else if(engpercent <= pass)
        printf("SORRY! You have failed English.\n\n You have Failed Overall. Good Luck Next Time.\n\n\n");
    else if(gkpercent <= pass)
        printf("SORRY! You have failed General Knowledge.\n\n You have Failed Overall. Good Luck Next Time.\n\n\n");
    else if(totalpercent >= pass)
        printf("CONGRATS! You have Passed. \n\n\n");
    else
        printf("ALAS! You have Failed. Good Luck Next Time. \n\n\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "RNG.h"
#include "getphrase.h"
#include "spinwheel.h"

int main()
{
    printf("        Welcome, LADIES...and....GENTLEMEN!\n");
    printf("             to...the one and only...\n");
    printf("******************************************************\n");
    printf("*                                                    *\n");
    printf("*         $|$ THE WHEEL OF FORTUNE $|$               *\n");
    printf("*               €|€ THE GAME €|€                     *\n");
    printf("*                                                    *\n");
    printf("******************************************************\n");
    printf("\n");
    printf("Who will be our next big winner?\n");
    printf("Will it be the man in the pink and green shirt?\n");
    printf("Will it be the woman in the beige cocktail dress?\n");
    printf("\n");
    printf("Or will it be YOU?\n");
    printf("Yes! YOU! \nSitting at the computer with one or two of your friends!\n");
    printf("\n");
    printf("Only one way to find out, and that is to play...\n");
    printf("******************************************************\n");
    printf("*                                                    *\n");
    printf("*         $|$ THE WHEEL OF FORTUNE $|$               *\n");
    printf("*               €|€ THE GAME €|€                     *\n");
    printf("*                                                    *\n");
    printf("******************************************************\n");

    int number_of_players;
    int score_counter_1;
    int score_counter_2;
    int score_counter_3;
    int turn_counter;
    int turn_flag = 0;

    while(number_of_players < 2 || number_of_players > 3){
    printf("How many contestants are playing now? Only 2 or 3 players!");
    scanf("%d", &number_of_players);
    printf("\n");
    }


    printf("spinning wheel/n");
    SpinTheWheel();
 //   int scorevalue = casevalue;
return 0;

}

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

    printf("This is a random number %i\n", RandomNumber());
    printf("This a random phrase taken from a text file %s", getMemePhrase());

    int number_of_players;
    int score_counter_1;
    int score_counter_2;
    int score_counter_3;
    int turn_counter;
    int turn_flag = 0;

    while(number_of_players < 1 || number_of_players > 3){
    printf("How many contestants are playing now?");
    scanf("%d", &number_of_players);
    printf("\n");
    }


    printf("spinning wheel/n");
    SpinTheWheel();
 //   int scorevalue = casevalue;
return 0;

}

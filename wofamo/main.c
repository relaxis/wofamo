#include <stdio.h>
#include <stdlib.h>
#include "RNG.h"
#include "getphrase.h"
#include "spinwheel.h"

int main()
{
    printf("        Welcome, LADIES...and....GENTLEMEN!");
    printf("             to...the one and only...");
    printf("******************************************************");
    printf("*                                                    *");
    prinft("*         $|$ THE WHEEL OF FORTUNE $|$               *");
    printf("*               €|€ THE GAME €|€                     *");
    printf("*                                                    *");
    printf("******************************************************");

    printf("This is a random number %i\n", RandomNumber());
    printf("This a random phrase taken from a text file %s", getMemePhrase());



    printf("spinning wheel/n");
    SpinTheWheel();
    int scorevalue = casevalue;
return 0;

}

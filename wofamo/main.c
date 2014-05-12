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



    printf("spinning wheel/n");
    SpinTheWheel();
 //   int scorevalue = casevalue;
return 0;

}

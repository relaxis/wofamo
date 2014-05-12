#include <stdio.h>
#include <stdlib.h>
#include "RNG.h"
#include "getphrase.h"
#include "spinwheel.h"

int main()
{
    printf("This is a random number %i\n", RandomNumber());
    printf("This a random phrase taken from a text file %s", getMemePhrase());
    return 0;


    printf("spinning wheel/n");
    printf("the wheel landed on number %i\n", SpinTheWheel());


}

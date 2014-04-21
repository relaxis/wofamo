#include <stdio.h>
#include <stdlib.h>
#include "RNG.h"
#include "getphrase.h"

int main()
{
    printf("This is a random number %i\n", RandomNumber());
    printf("This a random phrase taken from a text file %s", getMemePhrase());
    return 0;
}

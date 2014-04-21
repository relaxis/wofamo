#ifndef RNG_H_INCLUDED
#define RNG_H_INCLUDED



#endif // RNG_H_INCLUDED

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int RandomNumber(void){

srand(time(NULL));
int rng = rand() % 29;
return rng;

}

#ifndef SPINWHEEL_H_INCLUDED
#define SPINWHEEL_H_INCLUDED



#endif // SPINWHEEL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "RNG.h"

int SpinTheWheel(void){

int wheelspinRN = RandomNumber();

if (wheelspinRN == 0)
printf("The wheel landed on");
return wheelspinRN;


}

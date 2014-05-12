#ifndef SPINWHEEL_H_INCLUDED
#define SPINWHEEL_H_INCLUDED



#endif // SPINWHEEL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

int SpinTheWheel(void){

int wheelspinRN = RandomNumber();

if (wheelspinRN == 0){
printf("The wheel landed on zero \n");
return wheelspinRN;}
return wheelspinRN;


// we then do if then statements depending on what happens or we use a switch

//switch(wheelstop)
//{
//case wheelspinRN == 0 :
//printf("The wheel landed on/n");
//return wheelspinRN;
//break;

//case wheelspinRN == 1 :
//printf("The wheel landed on/n");
//return wheelspinRN;
//break;
//}
}

#ifndef GETPHRASE_H_INCLUDED
#define GETPHRASE_H_INCLUDED



#endif // GETPHRASE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

int getMemePhrase(void){

FILE *file = fopen ("memes.txt", "r"); //opens the memes.txt file to read only
char line[1024];                       //array buffer to store read lines
char keptline[1024];                   //array to store the selected line
int count = 0;
while (fgets(line, 1024, file) != NULL) //get selected line at random
{
    count++;
    if ((rand() / (float)RAND_MAX) <= (1.0 / count))
     strcpy(keptline, line);

}
 // printf("%s", keptline);  uncomment this for debugging

 return keptline; // return the value of the function as a string
}

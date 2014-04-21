#ifndef GETPHRASE_H_INCLUDED
#define GETPHRASE_H_INCLUDED



#endif // GETPHRASE_H_INCLUDED

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int getMemePhrase(void){

FILE *file = fopen ("memes.txt", "r");
char line[1024];
char keptline[1024];
int count = 0;
//srand(time(NULL));
while (fgets(line, 1024, file) != NULL)
{
    count++;
    if ((rand() / (float)RAND_MAX) <= (1.0 / count))
     strcpy(keptline, line);

}
 printf("%s", keptline);
}

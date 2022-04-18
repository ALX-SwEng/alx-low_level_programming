#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand((unsigned int)(time(NULL)));
    int i;
 
    char pass[12];

    for (i = 0; i < 4; i++) 
    {
        pass[i] = rand() % 9;
        char capLetter;
        
        capLetter = 'A' + (rand() % 26);
        pass[i + 2] = capLetter;
        char letter;

        letter = 'a' + (rand() % 26);
        pass[i + 3] = letter;

        printf("%d%c%c", pass[i], pass[i + 2], pass[i + 3]);
    }
    printf("\n\n");
}

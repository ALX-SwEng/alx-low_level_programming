#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
* main - generate random password
*
* Return: Always success.
*/

int main()
{
    int i;
    char letter, capLetter, pass[12];
    
    srand((unsigned int)(time(NULL)));    

    for (i = 0; i < 4; i++) 
    {
        pass[i] = rand() % 9;
        
        capLetter = 'A' + (rand() % 26);
        pass[i + 2] = capLetter;
      
        letter = 'a' + (rand() % 26);
        pass[i + 3] = letter;

        /*printf("%d%c%c", pass[i], pass[i + 2], pass[i + 3]);*/
        printf("Tada! Congrats");
    }
    printf("\n");
    
    return (0);
}

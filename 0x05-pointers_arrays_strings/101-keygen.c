#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand((unsigned int)(time(NULL)));
    int i;
    char pass[12];

    printf("Press enter to get a twelve-character password\n");
    getchar();

    for (i = 0; i < 4; i++) {
        pass[i] = rand() % 9;
        char capLetter = 'A' + (rand() % 26);
        pass[i + 2] = capLetter;
        char letter = 'a' + (rand() % 26);
        pass[i + 3] = letter;
        printf("%d%c%c", pass[i], pass[i + 2], pass[i + 3]);
    }
    printf("\n\n");
}

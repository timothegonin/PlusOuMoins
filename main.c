#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int nombreMystere = 0;
    const int MAX = 100, MIN = 1;

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    printf("TEST - nombre mystere est = %d", nombreMystere);
    return 0;
}

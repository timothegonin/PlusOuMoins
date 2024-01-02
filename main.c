#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int nombreMystere = 0;
    const int MAX = 100, MIN = 1;

    //initialisation du nombre
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    int nombreEntre = 0;
    printf("Saisir un nombre : \n");
    scanf("%d", &nombreEntre);


    //retour
    printf("TEST - nombre entre est = %d\n", nombreEntre);
    printf("TEST - nombre mystere est = %d\n", nombreMystere);
    return 0;
}

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

    //LOOP
    do{
        printf("Saisir un nombre : \n");
        scanf("%d", &nombreEntre);

        //condition
        if(nombreMystere > nombreEntre)
        {
            printf("C'est plus!\n\n");
        }
        else if(nombreMystere < nombreEntre)
        {
            printf("C'est moins!\n\n");
        }
        else
        {
            printf("Bravo, vous avez trouve le nombre mystere! :)\n\n ");
        }
    } while (nombreEntre != nombreMystere);


    return 0;
}

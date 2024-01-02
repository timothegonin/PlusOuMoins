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

    printf("|===-=== . ===-=== . ===-===|\n");
    printf("| JEUX - Trouvez le nombre  |\n");
    printf("|===-=== . ===-=== . ===-===|\n\n");


    //LOOP
    do{
        printf("Saisir un nombre entre 1 et 100 : \n");
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
            printf("\n\n|===-=== . ===-=== . ===-=== . ===-=== . ===-=== . ===-===|\n");
            printf("|   FELICITATION, vous avez trouve le nombre mystere! :)  |\n");
            printf("|===-=== . ===-=== . ===-=== . ===-=== . ===-=== . ===-===|\n");
        }
    } while (nombreEntre != nombreMystere);

    return 0;
}

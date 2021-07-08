#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int randnum = rand() % 10 + 1;
    int answer = 0;
    int trials = 10;

    // printf("Le chiffre aléatoire est %d.\n", randnum);

    while (answer != randnum && trials != 0)
    {
        printf("Trouvez le chiffre magique entre 1 et 10 !\n");
        printf("%d essai(s) restant.\n", trials);
        printf("Saisissez un chiffre entre 1 et 10 : ");
        scanf("%d", &answer);
        if (answer != randnum)
        {
            printf("Vous n'avez pas trouvé le chiffre magique.\n");
            trials--;
        }
    }
    if (answer == randnum)
    {
        printf("Bravo ! Vous avez trouvé le chiffre magique : %d.", randnum);
    }
    else
    {
        printf("Dommage ! Vous n'avez plus d'essais.");
    }
}

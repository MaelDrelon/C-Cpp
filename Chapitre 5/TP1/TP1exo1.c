#include <stdlib.h>
#include <stdio.h>
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);

int fgetc(FILE* pointeurDeFichier);

int main(int argc, char *argv[])
{
    int caractereActuel = 0;
    FILE* fichier = NULL;

    fichier = fopen("source.txt", "r");

     if (fichier != NULL)
    {
        do
        {
            caractereActuel = fgetc(fichier);
            printf("%c", caractereActuel);
        }while (caractereActuel != EOF);

        fclose(fichier);
    }
    else
    {
        printf("Echec");
    }

    return 0;
}


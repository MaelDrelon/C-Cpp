#include <stdlib.h>
#include <stdio.h>
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);

int fgetc(FILE* pointeurDeFichier);

int main(int argc, char *argv[])
{
    FILE* fichierdest1 = NULL;
    FILE* fichiersource = NULL;
    int i;

    fichierdest1 = fopen("dest1.txt","r+");
    fichiersource = fopen("source.txt","r");

    for (i=0; i<48; i++)
    {
        putc(getc(fichiersource),fichierdest1);
    }
    fclose (fichierdest1);
    fclose (fichiersource);
    return 0;
}


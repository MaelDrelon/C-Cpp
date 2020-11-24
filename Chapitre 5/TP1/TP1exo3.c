#include <stdlib.h>
#include <stdio.h>
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);

int fgetc(FILE* pointeurDeFichier);

int main(int argc, char *argv[])
{
    FILE* fichierdest2 = NULL;
    FILE* fichiersource = NULL;
    int i;
    int c;

    fichierdest2 = fopen("dest2.txt","r+");
    fichiersource = fopen("source.txt","r");

    do
    {
        c=getc(fichiersource);
        if (c == 'a')
        {
            putc('.', fichierdest2);
        }
        else
        {
            putc(c, fichierdest2);
        }
    }
    while(c!=EOF);
    fclose (fichierdest2);
    fclose (fichiersource);
    return 0;
}


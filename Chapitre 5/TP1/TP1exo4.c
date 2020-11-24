#include <stdlib.h>
#include <stdio.h>

long file_size(FILE *source, FILE *dest1, FILE *dest2)
{
    int i=0, c;

    do
    {
        c = getc(source);
        i=i+1;
    }while(c != EOF);

    printf("Le dossier a %d octet de stocke.", i);

    i=0;

    do
    {
        c = getc(dest1);
        i=i+1;
    }while(c != EOF);

    printf("\nLe dossier a %d octet de stocke.", i);

    i=0;

    do
    {
        c = getc(dest2);
        i=i+1;
    }while(c != EOF);

    printf("\nLe dossier a %d octet de stocke.", i);
}

int main(int argc, char** argv)
{
    FILE *source;
    FILE *dest1;
    FILE *dest2;

    source = fopen(".\\source.txt","r");
    dest1 = fopen(".\\dest1.txt","r");
    dest2 = fopen(".\\dest2.txt","r");

    file_size (source, dest1, dest2);

    fclose (dest2);
    fclose (dest1);
    fclose (source);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nom[10];
    char prenom[10];
    int nbnotes;
    float note[50];
}
noteseninfo;

int saisir(noteseninfo *noteseninfo, char eleve, int nbnotes,int i)
{
    i = 0;
    int stop = 0;
    while (stop !=1)
    {
        printf("Veuillez inscrire le nom de l'eleve : ");
        scanf("%s",noteseninfo[i].nom);
        if (stricmp((const char*)noteseninfo[i].nom,"stop")==0)
        {
            stop =1;
        }
        i=i+1;
    }
    printf("\n\nLes eleves sont : \n");

    int f = 0;

    while (f < i-1)
    {
        printf ("%s\n",noteseninfo[f].nom);
        f=f+1;
    }
}

int note()
{

}

int main(int argc, char** argv)
{
    noteseninfo noteseninfo[50];
    char eleve;
    int nbnote;
    int i;

    saisir(noteseninfo, eleve, nbnote, i);


    return 0;
}

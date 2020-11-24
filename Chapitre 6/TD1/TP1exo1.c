#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float note;
    char nom[10];
    char prenom[10];
    int age;
}
fiche;
void main()
{
    fiche f1;
    f1.note=45;
    strcpy(f1.nom," Drelon ");
    strcpy(f1.prenom," Mael \n");
    f1.age=20;
    printf(" %f \n",f1.note);
    printf(" %d \n",f1.age);
    printf(" %s \n",f1.nom);
    printf(" %s \n",f1.prenom);
}

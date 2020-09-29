#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int age=0, sexe=0, cine=0, QouM=0, rest=0, sport=0, qsp=0 ;

    printf("Quelle age avez vous?\n");
    scanf("%d",&age);
    printf("Homme ou Femme? (1 pour H et 0 pour F)\n");
    scanf("%d",&sexe);
    printf("\nCombien de fois allez vous au cinema le mois?\n");
    scanf("%d",&cine);
    printf("\nLe Quick ou le Mac Donald?(1 pour Quick et 0 pour Mac Donald)\n");
    scanf("%d",&QouM);
    printf("\nCombien de fois allez vous la bas le mois?\n");
    scanf("%d",&rest);
    printf("\nPratiquez vous un sport?(1 pour oui, 0 pour non)\n");
    scanf("%d",&sport);

    if(sport==1)
    {
        printf("Quelle sport pratiquez vous?\n-1:Foot\n-2:Tennis\n-3:Basket\n-4:Judo\n-5:Natation\n");
        scanf("%d",&qsp);
    }
    else
    {
        printf("\nNous alons passer aux recapitulatif alors...\n");
    }

    printf("\nRecapitulatif:\n");
    printf("Votre age est de :%d \n",age);
    if(sexe==1)
    {
        printf("Vous etes un homme\n");
    }
    else
    {
        printf("Vous etes une femme\n");
    }
    printf("Vous allez au cine %d fois par mois\n",cine);
    if(QouM==1)
    {
        printf("Vous allez chez Quick\n");
    }
    else
    {
        printf("Vous allez chez Mac Donald\n");
    }
    printf("Vous allez %d fois par mois manger la bas\n",rest);
    if(sport==1)
    {
        if(qsp==1)
        {
            printf("Vous faites du foot\n");
        }
        if(qsp==2)
        {
            printf("Vous faites du tennis\n");
        }
        if(qsp==3)
        {
            printf("Vous faites du basket\n");
        }
        if(qsp==4)
        {
            printf("Vous faites du judo\n");
        }
        if(qsp==5)
        {
            printf("Vous faites de la natation\n");
        }
    }
    else
    {
        printf("Vous ne faite pas de sport\n");
    }
}

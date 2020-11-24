#include <stdio.h>
#include <math.h>


void saisie(float *aa,float *bb,float *cc)
{
printf("Veuillez saisir aa : ");
scanf("%f",aa);
printf("Veuillez saisir bb : ");
scanf("%f",bb);
printf("Veuillez saisir cc : ");
scanf("%f",cc);
}

float *calcul(float aa,float bb,float cc)
{
 double D;

 D = pow(bb,2) - 4.0*aa*cc;

 if (aa==0 && bb==0 && cc==0)
 		printf("Tout reel est une solution de cette equation.\n");
 else if (aa==0 && bb==0)
 		printf("Cette equation ne possede pas de solutions.\n");
 else if (aa==0)
    {
     printf("La solution de cette equation du premier degre est :\n");
     printf(" x = %.4f\n", (double)cc/bb);
    }
 else if (D<0)
     printf("Cette equation n'a pas de solutions reelles.\n");
 else if (D==0)
    {
     printf("Cette equation a une seule solution reelle :\n");
     printf(" x =  %.4f\n", (double)-bb/(2*aa));
    }
 else
    {
     printf("Les solutions reelles de cette equation sont :\n");
     printf(" x1 = %.4f\n", (-bb+sqrt(D))/(2*aa));
     printf(" x2 = %.4f\n", (-bb-sqrt(D))/(2*aa));
    }
}


int main()
{
    float aa, bb, cc;
    saisie(&aa, &bb, &cc);
    calcul(aa, bb, cc);
}

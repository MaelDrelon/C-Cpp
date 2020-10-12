#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

main()

{ char chr[50];

  char chaine[50];

  int l,e,i;

  printf("Saisir toute une phrase en MINUSCULE.\n");

  gets(chr);

  printf("Saisir toute une phrase en MAJUSCULE.\n");

  gets(chaine);

  l=strlen(chr);

  for(i=0;i<l;i++)
    {

        chr[i]=toupper(chr[i]);

    }

printf("La phrase en MINUSCULE sera en MAJUSCULE : %s\n",chr );

e=strlen(chaine);

for(i=0;i<e;i++)
    {

        chaine[i]=tolower(chaine[i]);

    }
printf("La phrase en MAJUSCULE sera en MINUSCULE : %s\n",chaine);

getchar();
}

#include <stdio.h>
int main()
{
   char c, str[100];
   int i, occurrence = 0;

   printf("Entrez une chaine de caracteres: \n");
   gets(str);

   printf("\nEntrez la lettre rechercher: \n");
   scanf("%c",&c);

   for(i = 0; str[i] != '\0'; ++i)
   {
       if(str[i] == c)
           ++occurrence;
   }

   printf("\nLe nombre d occurrence de %c est %d\n", c, occurrence);
   return 0;
}

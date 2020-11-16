#include<stdio.h>
#include<string.h>
#include<conio.h>
void maj(char str[100]);
void main()
{
       char str[100];
       printf("Entrez la chaine a convertir en majuscule: \n");
       gets(str);
       maj(str);
}
void maj(char str[100])
{
    int i;
    int com = 0;
    for (i = 0; str[i]!='\0'; i++)
       {
          if(str[i] >= 'a' && str[i] <= 'z') {
             str[i] = str[i] -32;
             com++;
       }
       }
       printf("\n La chaine en majuscule = %s\n", str);
       printf("\n %d lettre(s) a etait modifier\n", com);
       getch();
       return 0;
}
